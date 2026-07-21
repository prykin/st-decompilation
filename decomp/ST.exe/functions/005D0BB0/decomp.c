
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChangePlayerTeam */

void __thiscall
SettMapMTy::ChangePlayerTeam(SettMapMTy *this,uint param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  SettMapMTy *pSVar4;
  int errorCode;
  void *pvVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  DArrayTy *pDVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar12;
  InternalExceptionFrame local_54;
  byte local_10;
  undefined3 uStack_f;
  SettMapMTy *local_c;
  uint local_8;
  
  if ((this->field_1F84 != (DArrayTy *)0x0) && (DAT_00808a8f == param_2)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_c = this;
    errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pSVar4 = local_c;
    if (errorCode == 0) {
      pDVar10 = local_c->field_1F84;
      if (param_1 < pDVar10->count) {
        pvVar5 = (void *)(pDVar10->elementSize * param_1 + (int)pDVar10->data);
      }
      else {
        pvVar5 = (void *)0x0;
      }
      if (pvVar5 != (void *)0x0) {
        if (param_2 != 0) {
          uVar11 = param_1 + 1;
          *(byte *)((int)pvVar5 + 0x4a) = (byte)param_3;
          pDVar10 = local_c->field_1F84;
          bVar12 = uVar11 < pDVar10->count;
          if ((int)uVar11 < (int)pDVar10->count) {
            do {
              if (bVar12) {
                pcVar6 = (char *)(pDVar10->elementSize * uVar11 + (int)pDVar10->data);
              }
              else {
                pcVar6 = (char *)0x0;
              }
              if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\0')) break;
              pcVar6[0x4a] = (byte)param_3;
              pDVar10 = local_c->field_1F84;
              uVar11 = uVar11 + 1;
              bVar12 = uVar11 < pDVar10->count;
            } while ((int)uVar11 < (int)pDVar10->count);
          }
          (*(code *)local_c->field_0000->field_002C)();
          pSVar4->field_2121 = pSVar4->field_2121 + 1;
          g_currentExceptionFrame = local_54.previous;
          return;
        }
        if (param_3 != 0xff) {
          bVar1 = *(byte *)((int)pvVar5 + 2);
          local_8 = CONCAT31(local_8._1_3_,bVar1);
          if ((bVar1 != 0xff) && (param_3 != bVar1)) {
            if (*(char *)((int)pvVar5 + 4) == '\x04') {
              _local_10 = CONCAT31(uStack_f,bVar1);
              if ((byte)param_3 == bVar1) {
                uVar7 = 0;
                uVar11 = (uint)bVar1;
              }
              else {
                uVar8 = param_3 & 0xff;
                bVar2 = g_playerRelationMatrix[uVar8][bVar1];
                uVar11 = local_8;
                if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar8] == 0)) {
                  uVar7 = 0xfffffffe;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar8] == 0)) {
                  uVar7 = 0xffffffff;
                }
                else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar8] == 1)) {
                  uVar7 = 1;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar8] == 1)) {
                  uVar7 = 2;
                }
                else {
                  uVar7 = 0;
                }
              }
              switch(uVar7) {
              case 1:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar11,(byte)param_3,'\0');
                break;
              case 2:
                thunk_FUN_0056a8d0(&DAT_00807620,param_3,(byte)uVar11,'\0');
                break;
              case 0xfffffffe:
                thunk_FUN_0056a8d0(&DAT_00807620,param_3,(byte)uVar11,'\x01');
                break;
              case 0xffffffff:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar11,(byte)param_3,'\x01');
              }
            }
            else {
              thunk_FUN_0056a960(&DAT_00807620,param_3,bVar1);
            }
            (*(code *)pSVar4->field_0000->field_002C)();
            DAT_00808aab = DAT_00808aab + 1;
          }
        }
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x5df,0,errorCode,
                               &DAT_007a4ccc,s_SettMapMTy__ChangePlayerTeam_007cd47c);
    if (iVar9 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_settmobj_cpp_007cd258,0x5df);
  }
  return;
}

