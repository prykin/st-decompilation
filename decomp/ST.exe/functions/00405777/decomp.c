
int * __cdecl thunk_FUN_006a3d40(uint param_1,uint param_2,char *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined2 uVar8;
  int *piVar9;
  
  bVar2 = false;
  if ((((DAT_007ec178 & 4) != 0) && (iVar4 = thunk_FUN_006a5210(), iVar4 == 0)) &&
     (iVar4 = FUN_00730fa0(2,0x7ec1d0,0x17b,0,(byte *)s__CrtCheckMemory___007ec2bc), iVar4 == 1)) {
    pcVar1 = (code *)swi(3);
    piVar5 = (int *)(*pcVar1)();
    return piVar5;
  }
  iVar4 = DAT_007ec17c;
  if (DAT_007ec17c == DAT_007ec180) {
    pcVar1 = (code *)swi(3);
    piVar5 = (int *)(*pcVar1)();
    return piVar5;
  }
  iVar6 = (*(code *)PTR_FUN_007f1498)(1,0,param_1,param_2,DAT_007ec17c,param_3,param_4);
  if (iVar6 == 0) {
    if (param_3 == (char *)0x0) {
      iVar4 = FUN_00730fa0(0,0,0,0,&DAT_007a4ccc);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
    }
    else {
      iVar4 = FUN_00730fa0(0,0,0,0,(byte *)s_Client_hook_allocation_failure_a_007ec27c);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
    }
  }
  else {
    uVar7 = param_2 & 0xffff;
    if ((uVar7 != 2) && ((DAT_007ec178 & 1) == 0)) {
      bVar2 = true;
    }
    if ((param_1 < 0xffffffe1) && (param_1 + 0x24 < 0xffffffe1)) {
      if ((((uVar7 != 4) && (param_2 != 1)) && (uVar7 != 2)) &&
         ((param_2 != 3 && (iVar6 = FUN_00730fa0(1,0,0,0,&DAT_007a4ccc), iVar6 == 1)))) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
      piVar5 = FUN_00730e20(param_1 + 0x24);
      if (piVar5 != (int *)0x0) {
        DAT_007ec17c = DAT_007ec17c + 1;
        if (bVar2) {
          *piVar5 = 0;
          piVar5[1] = 0;
          piVar5[2] = 0;
          piVar5[3] = -0x1234544;
          piVar5[4] = param_1;
          piVar5[5] = 3;
          piVar5[6] = 0;
        }
        else {
          DAT_00854968 = DAT_00854968 + param_1;
          DAT_00854a44 = DAT_00854a44 + param_1;
          if (DAT_00854a48 < DAT_00854a44) {
            DAT_00854a48 = DAT_00854a44;
          }
          piVar9 = piVar5;
          if (DAT_0085496c != (int *)0x0) {
            DAT_0085496c[1] = (int)piVar5;
            piVar9 = DAT_00854964;
          }
          DAT_00854964 = piVar9;
          *piVar5 = (int)DAT_0085496c;
          piVar5[1] = 0;
          piVar5[2] = (int)param_3;
          piVar5[3] = param_4;
          piVar5[4] = param_1;
          piVar5[5] = param_2;
          piVar5[6] = iVar4;
          DAT_0085496c = piVar5;
        }
        uVar8 = CONCAT11((char)DAT_007ec184,(char)DAT_007ec184);
        piVar5[7] = CONCAT22(uVar8,uVar8);
        uVar8 = CONCAT11((char)DAT_007ec184,(char)DAT_007ec184);
        *(uint *)((int)piVar5 + param_1 + 0x20) = CONCAT22(uVar8,uVar8);
        uVar3 = DAT_007ec184._2_1_;
        uVar8 = CONCAT11(DAT_007ec184._2_1_,DAT_007ec184._2_1_);
        piVar9 = piVar5 + 8;
        for (uVar7 = param_1 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *piVar9 = CONCAT22(uVar8,uVar8);
          piVar9 = piVar9 + 1;
        }
        for (uVar7 = param_1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)piVar9 = uVar3;
          piVar9 = (int *)((int)piVar9 + 1);
        }
        return piVar5 + 8;
      }
    }
    else if (param_3 == (char *)0x0) {
      iVar4 = ReportDebugMessage(s_E____titans_Crt__Dbgheap_c_007ec1d0,0x19c,0,0,
                                 s_Invalid_allocation_size___u_byte_007ec1f0,param_1);
      if (iVar4 != 0) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
    }
    else {
      iVar4 = ReportDebugMessage(param_3,param_4,0,0,s_Invalid_allocation_size___u_byte_007ec1f0,
                                 param_1);
      if (iVar4 != 0) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
    }
  }
  return (int *)0x0;
}

