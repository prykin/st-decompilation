
void __cdecl FUN_00675fe0(uint param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  ushort *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_48;
  undefined4 local_44 [16];
  
  local_48 = DAT_00858df8;
  DAT_00858df8 = &local_48;
  iVar3 = __setjmp3(local_44,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_48;
    iVar7 = FUN_006ad4d0(s_E____titans_ai_ai_mdef_cpp_007d2d58,0x118,0,iVar3,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7d2d58,0x119);
    return;
  }
  if (DAT_007fa174 != (STAllPlayersC *)0x0) {
    puVar4 = STAllPlayersC::GetObjsList((char)param_1);
    if (puVar4 != (uint *)0x0) {
      uVar1 = puVar4[3];
      if (uVar1 != 0) {
        uVar9 = 0;
        if (uVar1 != 0) {
          uVar8 = 0;
          if (uVar1 == 0) {
            puVar5 = (ushort *)0x0;
            goto LAB_00676053;
          }
          do {
            puVar5 = (ushort *)(puVar4[2] * uVar8 + puVar4[7]);
LAB_00676053:
            piVar6 = (int *)thunk_FUN_0042b620(param_1,(uint)*puVar5,1);
            if (piVar6 != (int *)0x0) {
              iVar3 = (**(code **)(*piVar6 + 0x2c))();
              if (iVar3 == 0x78) {
                iVar3 = (**(code **)(*piVar6 + 0x2c))();
                if (iVar3 == 0x78) {
                  *(undefined4 *)((int)piVar6 + 0x269) = 0xffffffff;
                }
              }
            }
            uVar9 = uVar9 + 1;
            uVar8 = uVar9 & 0xffff;
          } while (uVar8 < puVar4[3]);
        }
        STAllPlayersC::AddObjsToGroup(DAT_007fa174,param_1,0,(int)puVar4,(undefined2 *)0x0);
      }
      if (puVar4 != (uint *)0x0) {
        FUN_006ae110((byte *)puVar4);
      }
    }
  }
  DAT_00858df8 = (undefined4 *)local_48;
  return;
}

