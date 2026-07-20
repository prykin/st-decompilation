
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settsobj.cpp
   SettMapSTy::SetListCtrls */

void __thiscall SettMapSTy::SetListCtrls(SettMapSTy *this)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  SettMapSTy *pSVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 unaff_ESI;
  char *pcVar10;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  SettMapSTy *local_14;
  int local_10;
  int local_c;
  cMf32 *local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar5 = local_14;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Start_settsobj_cpp_007cd544,0x3b,0,iVar6,&DAT_007a4ccc,
                               s_SettMapSTy__SetListCtrls_007cd56c);
    if (iVar9 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Start_settsobj_cpp_007cd544,0x3b);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_14->field_1E26 == '\x02') {
    local_8 = (cMf32 *)local_14->field_1F3F;
  }
  else {
    local_8 = (cMf32 *)local_14->field_1F43;
  }
  local_14->field_0029 = 2;
  local_14->field_002D = 0x20;
  local_c = 0;
  local_10 = 0x7e3;
  do {
    iVar9 = 0;
    iVar6 = local_10;
    do {
      if ((&pSVar5->field_0000)[iVar6 + iVar9] != 0) {
        iVar1 = pSVar5->field_1F84;
        if ((iVar1 == 0) || (uVar8 = pSVar5->field_1F88 + local_c, *(uint *)(iVar1 + 0xc) <= uVar8))
        {
          pcVar10 = (char *)0x0;
        }
        else {
          pcVar10 = (char *)(*(int *)(iVar1 + 8) * uVar8 + *(int *)(iVar1 + 0x1c));
        }
        uVar2 = (&pSVar5->field_0000)[iVar6 + iVar9];
        pSVar5->field_0031 = 0;
        pSVar5->field_0025 = uVar2;
        if (pcVar10 != (char *)0x0) {
          switch(iVar9) {
          case 0:
            if (*(byte **)(pcVar10 + 0x50) != (byte *)0x0) {
              FUN_006ae110(*(byte **)(pcVar10 + 0x50));
            }
            if (pSVar5->field_1E26 == '\x02') {
              puVar7 = CreateStrategList((int)local_8,(uint)(byte)pcVar10[2],0xffffffff);
            }
            else {
              puVar7 = CreateOpponentList(local_8,(uint)(byte)pcVar10[3],DAT_0080995c);
            }
            *(uint **)(pcVar10 + 0x50) = puVar7;
            if (puVar7[3] <= (uint)(byte)pcVar10[5]) {
              pcVar10[5] = (char)puVar7[3];
            }
            if ((puVar7[3] == 0) && (pcVar10[4] == '\x04')) {
              pcVar10[4] = '\x01';
            }
            break;
          case 1:
          case 2:
            if ((pSVar5->field_1E26 != '\x02') && (*pcVar10 != '\0')) {
              cVar4 = pcVar10[4];
joined_r0x005d502e:
              if (cVar4 != '\0') goto LAB_005d5030;
            }
            break;
          case 3:
            if (((pSVar5->field_1E26 != '\x02') || (pcVar10[4] != '\x02')) &&
               (*(int *)(*(int *)(pcVar10 + 0x50) + 0xc) != 0)) {
LAB_005d5030:
              pSVar5->field_0031 = 1;
            }
            break;
          case 5:
            if ((((DAT_0080874d != -1) && (*pcVar10 != '\0')) && (pcVar10[4] != '\0')) &&
               (pSVar5->field_1E26 != '\x02')) {
              if ((pcVar10[4] == '\x02') &&
                 (cVar4 = DAT_00808a8f, *(int *)(pcVar10 + 6) == DAT_0080877f))
              goto joined_r0x005d502e;
              goto LAB_005d5030;
            }
          }
        }
        (**(code **)(*(int *)pSVar5->field_000C + 0x18))(&pSVar5->field_0x1d);
        iVar6 = local_10;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 8);
    local_10 = iVar6 + 8;
    local_c = local_c + 1;
    if (0x832 < local_10) {
      g_currentExceptionFrame = local_58.previous;
      return;
    }
  } while( true );
}

