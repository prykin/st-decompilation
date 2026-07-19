
int __fastcall
FUN_0065e450(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined2 *puVar5;
  void *this;
  uint uVar6;
  uint uVar7;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar8;
  int local_8;
  
  uVar2 = param_3;
  local_8 = 0;
  switch(param_3) {
  case 0xa3:
    iVar3 = 0x4e;
    break;
  default:
    iVar3 = 0;
    break;
  case 0xa8:
    iVar3 = 0x45;
    break;
  case 0xb2:
    iVar3 = 0x70;
    break;
  case 0xbe:
    iVar3 = 0x72;
  }
  puVar4 = thunk_FUN_0065e360(param_1,param_2,iVar3);
  if (puVar4 == (uint *)0x0) {
    return 0;
  }
  uVar6 = puVar4[3];
  param_3 = 0;
  uVar8 = extraout_EDX;
  if (0 < (int)uVar6) {
    do {
      if (param_3 < uVar6) {
        puVar5 = (undefined2 *)(puVar4[2] * param_3 + puVar4[7]);
      }
      else {
        puVar5 = (undefined2 *)0x0;
      }
      this = (void *)STAllPlayersC::GetObjPtr
                               (DAT_007fa174,
                                CONCAT31((int3)((uint)puVar5 >> 8),*(undefined1 *)(param_1 + 0x24)),
                                CONCAT22((short)((uint)uVar8 >> 0x10),*puVar5),1);
      uVar8 = extraout_EDX_00;
      switch(uVar2) {
      case 0:
      case 5:
      case 0x1b:
                    /* WARNING: This code block may not be properly labeled as switch case */
        uVar6 = thunk_FUN_004c5350(this,0,(int *)0x0,param_4,param_5,0,0,0);
        local_8 = local_8 + (uint)(uVar6 != 0);
        uVar8 = extraout_EDX_01;
        break;
      case 0xf:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) {
LAB_0065e58d:
          if ((*(int *)((int)this + 0x245) != 0) || (*(int *)((int)this + 0x4ec) < 100))
          goto LAB_0065e5a7;
          bVar1 = 1;
        }
        else {
          uVar6 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
          iVar3 = *(int *)((int)this + 0x235);
          uVar7 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
          uVar8 = extraout_EDX_02;
          if ((&DAT_007e1984)[(uVar7 & 0xff) + ((uVar6 & 0xff) + iVar3 * 3) * 3] != '\0')
          goto LAB_0065e58d;
LAB_0065e5a7:
          bVar1 = 0;
        }
        local_8 = local_8 + (uint)bVar1;
      }
                    /* WARNING: This code block may not be properly labeled as switch case */
      uVar6 = puVar4[3];
      param_3 = param_3 + 1;
    } while ((int)param_3 < (int)uVar6);
  }
  FUN_006ae110((byte *)puVar4);
  return local_8;
}

