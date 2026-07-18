
void __thiscall FUN_005d0bb0(void *this,uint param_1,uint param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar12;
  undefined4 local_54;
  undefined4 local_50 [16];
  byte local_10;
  undefined3 uStack_f;
  int *local_c;
  uint local_8;
  
  if ((*(int *)((int)this + 0x1f84) != 0) && (DAT_00808a8f == param_2)) {
    local_54 = DAT_00858df8;
    DAT_00858df8 = &local_54;
    local_c = this;
    iVar5 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
    piVar4 = local_c;
    if (iVar5 == 0) {
      iVar5 = local_c[0x7e1];
      if (param_1 < *(uint *)(iVar5 + 0xc)) {
        iVar5 = *(int *)(iVar5 + 8) * param_1 + *(int *)(iVar5 + 0x1c);
      }
      else {
        iVar5 = 0;
      }
      if (iVar5 != 0) {
        if (param_2 != 0) {
          uVar11 = param_1 + 1;
          *(byte *)(iVar5 + 0x4a) = (byte)param_3;
          iVar5 = local_c[0x7e1];
          bVar12 = uVar11 < *(uint *)(iVar5 + 0xc);
          if ((int)uVar11 < (int)*(uint *)(iVar5 + 0xc)) {
            do {
              if (bVar12) {
                pcVar6 = (char *)(*(int *)(iVar5 + 8) * uVar11 + *(int *)(iVar5 + 0x1c));
              }
              else {
                pcVar6 = (char *)0x0;
              }
              if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\0')) break;
              pcVar6[0x4a] = (byte)param_3;
              iVar5 = local_c[0x7e1];
              uVar11 = uVar11 + 1;
              bVar12 = uVar11 < *(uint *)(iVar5 + 0xc);
            } while ((int)uVar11 < (int)*(uint *)(iVar5 + 0xc));
          }
          (**(code **)(*local_c + 0x2c))();
          *(int *)((int)piVar4 + 0x2121) = *(int *)((int)piVar4 + 0x2121) + 1;
          DAT_00858df8 = (undefined4 *)local_54;
          return;
        }
        if (param_3 != 0xff) {
          bVar1 = *(byte *)(iVar5 + 2);
          local_8 = CONCAT31(local_8._1_3_,bVar1);
          if ((bVar1 != 0xff) && (param_3 != bVar1)) {
            if (*(char *)(iVar5 + 4) == '\x04') {
              _local_10 = CONCAT31(uStack_f,bVar1);
              if ((byte)param_3 == bVar1) {
                uVar7 = 0;
                uVar10 = (uint)bVar1;
              }
              else {
                uVar8 = param_3 & 0xff;
                uVar11 = (uint)bVar1;
                cVar2 = *(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar11);
                uVar10 = local_8;
                if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar8) == '\0'))
                {
                  uVar7 = 0xfffffffe;
                }
                else if ((cVar2 == '\x01') &&
                        (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar8) == '\0')) {
                  uVar7 = 0xffffffff;
                }
                else if ((cVar2 == '\0') &&
                        (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar8) == '\x01')) {
                  uVar7 = 1;
                }
                else if ((cVar2 == '\x01') &&
                        (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar8) == '\x01')) {
                  uVar7 = 2;
                }
                else {
                  uVar7 = 0;
                }
              }
              switch(uVar7) {
              case 1:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar10,(byte)param_3,'\0');
                break;
              case 2:
                thunk_FUN_0056a8d0(&DAT_00807620,param_3,(byte)uVar10,'\0');
                break;
              case 0xfffffffe:
                thunk_FUN_0056a8d0(&DAT_00807620,param_3,(byte)uVar10,'\x01');
                break;
              case 0xffffffff:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar10,(byte)param_3,'\x01');
              }
            }
            else {
              thunk_FUN_0056a960(&DAT_00807620,param_3,bVar1);
            }
            (**(code **)(*piVar4 + 0x2c))();
            DAT_00808aab = DAT_00808aab + 1;
          }
        }
      }
      DAT_00858df8 = (undefined4 *)local_54;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_54;
    iVar9 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x5df,0,iVar5,&DAT_007a4ccc);
    if (iVar9 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7cd258,0x5df);
  }
  return;
}

