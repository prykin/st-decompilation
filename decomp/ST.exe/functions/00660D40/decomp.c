#include "../../pseudocode_runtime.h"


void __fastcall FUN_00660d40(AnonShape_00660D40_E58DF1E6 *param_1)

{
  uint uVar1;
  AnonShape_00660D40_F4300C26 *pAVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  AnonShape_0068EB30_4F4B480A *pAVar8;
  bool bVar9;
  AnonShape_0068EB30_4F4B480A local_5c;
  AiPlrClassTy *local_10;
  uint local_c;
  AnonShape_00660D40_F4300C26 *local_8;

  if (((param_1->field_0284 != 0) && (param_1->field_020B != 0)) &&
     (g_allPlayers_007FA174 != nullptr)) {
    local_8 = (AnonShape_00660D40_F4300C26 *)param_1;
    local_10 = thunk_FUN_004357f0(param_1->field_0024);
    iVar7 = param_1->field_020B;
    local_c = 0;
    if (0 < STField<int>(iVar7,0xC)) {
      bVar9 = STField<int>(iVar7,0xC) != 0;
      do {
        if (bVar9) {
          iVar7 = STField<int>(iVar7,0x8) * local_c + STField<int>(iVar7,0x1C);
        }
        else {
          iVar7 = 0;
        }
        sVar3 = param_1->field_007B;
        iVar6 = 0;
        uVar5 = local_c;
        if ((-(uint)(sVar3 != 1) & 2) != 0xffffffff) {
          do {
            uVar1 = *(uint *)(iVar7 + iVar6 * 4);
            if ((((uVar1 != 0) && (STField<int>(iVar7,0x28) == 0)) && (STField<int>(iVar7,0x24) == 0))
               && (((uVar1 != 0 && (uVar1 < 0x29)) || (sVar3 == 1)))) {
              pAVar8 = &local_5c;
              for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(undefined4 *)pAVar8 = 0;
                pAVar8 = (AnonShape_0068EB30_4F4B480A *)((int)&pAVar8->field_0003 + 1);
              }
              *(undefined2 *)pAVar8 = 0;
              pAVar2 = local_8;
              STPiece<0,4>(local_5c) = *(undefined4 *)(iVar7 + iVar6 * 4);
              STPiece<8,4>(local_5c) = 0;
              if (iVar6 == 0) {
                local_5c.field_0006 = STField<short>(iVar7,0xC);
              }
              else {
                local_5c.field_0006 = 0;
              }
              STPiece<4,2>(local_5c) = SUB42(uVar5,0);
              if (local_10 != nullptr) {
                STPiece<8,4>(local_5c) = local_10->field_065C;
                local_10->field_065C = STPiece<8,4>(local_5c) + 1;
              }
              STPiece<12,2>(local_5c) = local_8->field_007D;
              STPiece<22,2>(local_5c) = STField<undefined2>(iVar7,0xE);
              STPiece<24,2>(local_5c) = STField<undefined2>(iVar7,0x10);
              STPiece<26,2>(local_5c) = STField<undefined2>(iVar7,0x12);
              STPiece<28,1>(local_5c) = ((char *)iVar7)[0x14];
              if ((((char)STPiece<28,1>(local_5c) < '\0') || ('\a' < (char)STPiece<28,1>(local_5c))) &&
                 ((STPiece<28,1>(local_5c) = local_8->field_0081, (char)STPiece<28,1>(local_5c) < '\0' ||
                  ('\a' < (char)STPiece<28,1>(local_5c))))) {
                STPiece<28,1>(local_5c) = local_8->field_0024;
              }
              Library::MSVCRT::_strncpy(&local_5c.field_0x1d,(char *)(iVar7 + 0x15),0xe);
              if (iVar6 == 0) {
                sVar3 = *(short *)&pAVar2->field_0x7f;
              }
              else {
                sVar3 = 0;
              }
              /* ST_CALLSITE[00660EB8]: CALL 0x004056be; direct=004056BE AiTactClassTy::PrepareToSave */
              AiTactClassTy::PrepareToSave(*(AiTactClassTy **)&pAVar2[4].field_0x74,&local_5c,sVar3);
              uVar5 = local_c;
              param_1 = (AnonShape_00660D40_E58DF1E6 *)local_8;
            }
            sVar3 = param_1->field_007B;
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)((-(uint)(sVar3 != 1) & 2) + 1));
        }
        iVar7 = param_1->field_020B;
        local_c = uVar5 + 1;
        bVar9 = local_c < STField<uint>(iVar7,0xC);
      } while ((int)local_c < (int)STField<uint>(iVar7,0xC));
    }
  }
  return;
}

