#include "../../pseudocode_runtime.h"


uint FUN_006c6c80(RecoveredRecord_006C6C80_604E9FE0 *param_1)

{
  bool bVar1;
  RecoveredRecord_006C6C80_604E9FE0 *pRVar2;
  uint uVar3;
  int iVar4;
  byte local_108;
  uint local_107;
  uint local_8;

  pRVar2 = param_1;
  /* ST_CALLSITE[006C6C96]: CALL dword ptr [ESI + 0x42] */
  uVar3 = (*STField<code *>(param_1,0x42))(param_1,(int)&param_1 + 3,1);
  if (uVar3 != 1) {
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    return 0xfffffffb;
  }
  bVar1 = false;
  if (STPiece<3,1>(param_1) == -1) {
    /* ST_CALLSITE[006C6CC8]: CALL dword ptr [ESI + 0x42] */
    uVar3 = (*STField<code *>(pRVar2,0x42))(pRVar2,&local_8,1);
    if (uVar3 != 1) {
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      return 0xfffffffb;
    }
    /* ST_CALLSITE[006C6CF8]: CALL dword ptr [ESI + 0x42] */
    uVar3 = (*STField<code *>(pRVar2,0x42))(pRVar2,&local_108,local_8 & 0xff);
    if (uVar3 != (local_8 & 0xff)) {
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      return 0xfffffffb;
    }
    if (((char)local_8 == '\v') &&

       (iVar4 = Library::MSVCRT::_strncmp((char *)&local_108,"NETSCAPE2.0",0xb), iVar4 == 0
       )) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  /* ST_CALLSITE[006C6D4F]: CALL dword ptr [ESI + 0x42] */
  uVar3 = (*STField<code *>(pRVar2,0x42))(pRVar2,&local_8,1);
  while( true ) {
    if (uVar3 != 1) {
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      return 0xfffffffb;
    }
    if ((char)local_8 == '\0') {
      return 0;
    }
    /* ST_CALLSITE[006C6D74]: CALL dword ptr [ESI + 0x42] */
    uVar3 = (*STField<code *>(pRVar2,0x42))(pRVar2,&local_108,local_8 & 0xff);
    if (uVar3 != (local_8 & 0xff)) break;
    if (((bVar1) && ((local_108 & 7) == 1)) && (2 < (byte)local_8)) {
      *(uint *)&pRVar2[1].field_0x10 = *(uint *)&pRVar2[1].field_0x10 | 2;
      *(uint *)&pRVar2[1].field_0x14 = local_107 & 0xffff;
    }
    if ((STPiece<3,1>(param_1) == -7) && (3 < (byte)local_8)) {
      pRVar2[1].field_0x18 = local_108;
      *(short *)&pRVar2[1].field_0x19 = (short)local_107;
      pRVar2[1].field_0x1b = STPiece<2,1>(local_107);
      if ((short)local_107 != 0) {
        *(uint *)&pRVar2[1].field_0x10 = *(uint *)&pRVar2[1].field_0x10 | 2;
      }
    }
    /* ST_CALLSITE[006C6DEC]: CALL dword ptr [ESI + 0x42] */
    uVar3 = (*STField<code *>(pRVar2,0x42))(pRVar2,&local_8,1);
  }
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  return 0xfffffffb;
}

