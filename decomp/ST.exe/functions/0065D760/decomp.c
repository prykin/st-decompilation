
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::_AddObjFlt */

void __thiscall AiFltClassTy::_AddObjFlt(AiFltClassTy *this,int *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  AiFltClassTy *pAVar3;
  undefined2 uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  AiFltClassTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar5 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pAVar3 = local_8;
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    if (iVar5 != -100) {
      iVar7 = FUN_006ad4d0(s_E____titans_ai_ai_flt_cpp_007d2b80,0xa5,0,iVar5,&DAT_007a4ccc);
      if (iVar7 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FUN_006a5e40(iVar5,0,0x7d2b80,0xa6);
    }
    return;
  }
  if (param_1 == (int *)0x0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  if (*(short *)(local_8 + 0x7d) == -2) {
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  if (DAT_007fa174 != (STAllPlayersC *)0x0) {
    iVar5 = (**(code **)(*param_1 + 0x2c))();
    if ((iVar5 < 0x32) || (0x73 < iVar5)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(short *)(pAVar3 + 0x7b) != 1)) ||
       (iVar5 = (**(code **)(*param_1 + 0x2c))(), iVar5 == 0x78)) {
      FUN_006a5e40(-100,DAT_007ed77c,0x7d2b80,0x9b);
    }
    puVar6 = FUN_006ae290((uint *)0x0,1,2,1);
    FUN_006ae1c0(puVar6,(undefined4 *)((int)param_1 + 0x32));
    iVar5 = (**(code **)(*param_1 + 0x2c))();
    if ((iVar5 < 1) || (0x28 < iVar5)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (param_2 == 0) {
        uVar4 = 0xfffe;
      }
      else {
        uVar4 = (undefined2)param_1[0xc];
      }
      *(undefined2 *)(param_1 + 0x207) = uVar4;
    }
    STAllPlayersC::AddObjsToGroup
              (DAT_007fa174,CONCAT31((int3)((uint)extraout_ECX >> 8),pAVar3[0x24]),
               *(ushort *)(pAVar3 + 0x7d),(int)puVar6,(undefined2 *)0x0);
    FUN_006ae110((byte *)puVar6);
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return;
}

