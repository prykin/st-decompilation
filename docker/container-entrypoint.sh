#!/usr/bin/env bash
set -euo pipefail

uid=${ST_HOST_UID:-1000}
gid=${ST_HOST_GID:-1000}

if [[ ! "$uid" =~ ^[0-9]+$ ]] || [[ ! "$gid" =~ ^[0-9]+$ ]]; then
    echo "ST_HOST_UID and ST_HOST_GID must be numeric" >&2
    exit 2
fi

if [[ "$uid" == 0 ]]; then
    exec /usr/local/bin/st-command "$@"
fi

group_name=$(getent group "$gid" | cut -d: -f1 || true)
if [[ -z "$group_name" ]]; then
    group_name=st-host
    groupadd --gid "$gid" "$group_name"
fi

user_name=$(getent passwd "$uid" | cut -d: -f1 || true)
if [[ -z "$user_name" ]]; then
    user_name=st-host
    useradd -K UID_MIN=0 -K UID_MAX=60000 \
        --uid "$uid" --gid "$gid" --home-dir /home/st \
        --no-create-home --shell /bin/bash "$user_name"
fi

mkdir -p /home/st
chown "$uid:$gid" /home/st
exec gosu "$uid:$gid" /usr/local/bin/st-command "$@"
