
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (27), none consume AL/AX, and every RET path defines full EAX; sites=006DE9C0 @ 006DF0E3
   -> TEST TEST EAX,EAX | 006DE9C0 @ 006DF192 -> TEST TEST EAX,EAX | 006DE9C0 @ 006DF244 -> TEST
   TEST EAX,EAX | 006DE9C0 @ 006DF2E7 -> TEST TEST EAX,EAX | 006DE9C0 @ 006DF379 -> TEST TEST
   EAX,EAX | 006DE9C0 @ 006DF47C -> TEST TEST EAX,EAX | 006DE9C0 @ 006DF50F -> TEST TEST EAX,EAX |
   006DE9C0 @ 006DF60B -> TEST TEST EAX,EAX | 006DE9C0 @ 006DF69B -> TEST TEST EAX,EAX | 006DE9C0 @
   006DF7A9 -> TEST TEST EAX,EAX | 006DE9C0 @ 006DF83B -> TEST TEST EAX,EAX | 006DE9C0 @ 006DF932 ->
   TEST TEST EAX,EAX | 006DE9C0 @ 006DF9C8 -> TEST TEST EAX,EAX | 006DE9C0 @ 006DFAF1 -> TEST TEST
   EAX,EAX | 006DE9C0 @ 006DFB90 -> TEST TEST EAX,EAX | 006DE9C0 @ 006DFC9E -> TEST TEST EAX,EAX |
   006DE9C0 @ 006DFD33 -> TEST TEST EAX,EAX | 006DE9C0 @ 006DFE28 -> TEST TEST EAX,EAX | 006DE9C0 @
   006DFEBD -> TEST TEST EAX,EAX | 006DE9C0 @ 006DFFD8 -> TEST TEST EAX,EAX | 006DE9C0 @ 006E007D ->
   TEST TEST EAX,EAX | 006DE9C0 @ 006E0181 -> TEST TEST EAX,EAX | 006DE9C0 @ 006E0228 -> TEST TEST
   EAX,EAX | 006DE9C0 @ 006E0345 -> TEST TEST EAX,EAX */

int __thiscall FUN_006de570(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_2c;
  int local_28;
  float local_1c;
  float local_18;
  undefined4 local_14;
  double local_10;
  int local_8;

  local_1c = (float)(param_1 * 2) * (float)*(double *)((int)this + 200);
  param_1 = -30000;
  local_8 = -30000;
  local_18 = (float)(param_2 * 2) * (float)*(double *)((int)this + 200);
  local_14 = 0;
  param_2 = 30000;
  FUN_006e25d0(this,&local_2c);
  iVar1 = local_2c >> 0x10;
  iVar4 = 30000;
  if (iVar1 < 30000) {
    iVar4 = iVar1;
  }
  if (-30000 < iVar1) {
    param_1 = iVar1;
  }
  iVar2 = local_28 >> 0x10;
  if (iVar2 < 30000) {
    param_2 = iVar2;
  }
  if (-30000 < iVar2) {
    local_8 = iVar2;
  }
  if ((((*(int *)((int)this + 0x30) <= iVar1) && (iVar1 < *(int *)((int)this + 0x38))) &&
      (*(int *)((int)this + 0x34) <= iVar2)) && (iVar2 < *(int *)((int)this + 0x3c))) {
    return 1;
  }
  FUN_006e25d0(this,&local_2c);
  iVar1 = local_2c >> 0x10;
  if (iVar1 < iVar4) {
    iVar4 = iVar1;
  }
  if (param_1 < iVar1) {
    param_1 = iVar1;
  }
  iVar2 = local_28 >> 0x10;
  if (iVar2 < param_2) {
    param_2 = iVar2;
  }
  if (local_8 < iVar2) {
    local_8 = iVar2;
  }
  if (((*(int *)((int)this + 0x30) <= iVar1) && (iVar1 < *(int *)((int)this + 0x38))) &&
     ((*(int *)((int)this + 0x34) <= iVar2 && (iVar2 < *(int *)((int)this + 0x3c))))) {
    return 1;
  }
  local_10 = *(double *)((int)this + 200) + *(double *)((int)this + 200);
  FUN_006e25d0(this,&local_2c);
  iVar1 = local_2c >> 0x10;
  if (iVar1 < iVar4) {
    iVar4 = iVar1;
  }
  if (param_1 < iVar1) {
    param_1 = iVar1;
  }
  iVar2 = local_28 >> 0x10;
  if (iVar2 < param_2) {
    param_2 = iVar2;
  }
  if (local_8 < iVar2) {
    local_8 = iVar2;
  }
  if (((*(int *)((int)this + 0x30) <= iVar1) && (iVar1 < *(int *)((int)this + 0x38))) &&
     ((*(int *)((int)this + 0x34) <= iVar2 && (iVar2 < *(int *)((int)this + 0x3c))))) {
    return 1;
  }
  local_10 = *(double *)((int)this + 200) + *(double *)((int)this + 200);
  FUN_006e25d0(this,&local_2c);
  iVar1 = local_2c >> 0x10;
  if (iVar1 < iVar4) {
    iVar4 = iVar1;
  }
  if (param_1 < iVar1) {
    param_1 = iVar1;
  }
  iVar2 = local_28 >> 0x10;
  if (iVar2 < param_2) {
    param_2 = iVar2;
  }
  if (local_8 < iVar2) {
    local_8 = iVar2;
  }
  if ((((*(int *)((int)this + 0x30) <= iVar1) && (iVar1 < *(int *)((int)this + 0x38))) &&
      (*(int *)((int)this + 0x34) <= iVar2)) && (iVar2 < *(int *)((int)this + 0x3c))) {
    return 1;
  }
  FUN_006e25d0(this,&local_2c);
  iVar1 = local_2c >> 0x10;
  if (iVar1 < iVar4) {
    iVar4 = iVar1;
  }
  if (param_1 < iVar1) {
    param_1 = iVar1;
  }
  iVar2 = local_28 >> 0x10;
  if (iVar2 < param_2) {
    param_2 = iVar2;
  }
  if (local_8 < iVar2) {
    local_8 = iVar2;
  }
  if (((*(int *)((int)this + 0x30) <= iVar1) && (iVar1 < *(int *)((int)this + 0x38))) &&
     ((*(int *)((int)this + 0x34) <= iVar2 && (iVar2 < *(int *)((int)this + 0x3c))))) {
    return 1;
  }
  FUN_006e25d0(this,&local_2c);
  iVar1 = local_2c >> 0x10;
  if (iVar1 < iVar4) {
    iVar4 = iVar1;
  }
  if (param_1 < iVar1) {
    param_1 = iVar1;
  }
  iVar2 = local_28 >> 0x10;
  if (iVar2 < param_2) {
    param_2 = iVar2;
  }
  if (local_8 < iVar2) {
    local_8 = iVar2;
  }
  if (((*(int *)((int)this + 0x30) <= iVar1) && (iVar1 < *(int *)((int)this + 0x38))) &&
     ((*(int *)((int)this + 0x34) <= iVar2 && (iVar2 < *(int *)((int)this + 0x3c))))) {
    return 1;
  }
  FUN_006e25d0(this,&local_2c);
  iVar1 = local_2c >> 0x10;
  if (iVar1 < iVar4) {
    iVar4 = iVar1;
  }
  if (param_1 < iVar1) {
    param_1 = iVar1;
  }
  iVar2 = local_28 >> 0x10;
  if (iVar2 < param_2) {
    param_2 = iVar2;
  }
  iVar3 = local_8;
  if (local_8 < iVar2) {
    iVar3 = iVar2;
  }
  if ((((*(int *)((int)this + 0x30) <= iVar1) && (iVar1 < *(int *)((int)this + 0x38))) &&
      (*(int *)((int)this + 0x34) <= iVar2)) && (iVar2 < *(int *)((int)this + 0x3c))) {
    return 1;
  }
  FUN_006e25d0(this,&local_2c);
  local_2c = local_2c >> 0x10;
  if (local_2c < iVar4) {
    iVar4 = local_2c;
  }
  if (param_1 < local_2c) {
    param_1 = local_2c;
  }
  local_28 = local_28 >> 0x10;
  if (local_28 < param_2) {
    param_2 = local_28;
  }
  if (iVar3 < local_28) {
    iVar3 = local_28;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((*(int *)((int)this + 0x30) <= local_2c) && (local_2c < *(int *)((int)this + 0x38))) &&
     ((*(int *)((int)this + 0x34) <= local_28 && (local_28 < *(int *)((int)this + 0x3c))))) {
    return 1;
  }
  if (param_1 < *(int *)((int)this + 0x30)) {
    return 0;
  }
  if (*(int *)((int)this + 0x38) <= iVar4) {
    return 0;
  }
  if (iVar3 < *(int *)((int)this + 0x34)) {
    return 0;
  }
  return (uint)(param_2 < *(int *)((int)this + 0x3c));
}

