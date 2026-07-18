
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00730450(uint param_1,uint param_2)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  uint local_c;
  undefined4 uStack_8;
  
  uVar2 = FUN_00736270();
  if ((param_2._2_2_ & 0x7ff0) != 0x7ff0) {
    fVar4 = FUN_00735310((double)CONCAT44(param_2,param_1));
    dVar1 = (double)fVar4;
    if (dVar1 == (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))) {
      FUN_00736270();
      return (float10)dVar1;
    }
    if ((uVar2 & 0x20) != 0) {
      FUN_00736270();
      return (float10)dVar1;
    }
    uStack_8 = (undefined4)((ulonglong)dVar1 >> 0x20);
    local_c = SUB84(dVar1,0);
    fVar4 = FUN_00735400(0x10,0xc,param_1,param_2,local_c,uStack_8,uVar2);
    return fVar4;
  }
  iVar3 = FUN_00736070(param_1,param_2);
  if (0 < iVar3) {
    if (iVar3 < 3) {
      FUN_00736270();
      return (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    }
    if (iVar3 == 3) {
      fVar4 = FUN_00735330(0xc,param_1,param_2);
      return fVar4;
    }
  }
  dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) + _DAT_0079cd88;
  fVar4 = FUN_00735400(8,0xc,param_1,param_2,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),uVar2);
  return fVar4;
}

