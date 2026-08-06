#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SubmarineTitans__Recovered__HiddenThis__AnonReceiver_0064A970.cpp

// 00668F50 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50
#line 4 "decomp/ST.exe/functions/00668F50/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970.
   Evidence: this_call_owners=[SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970];
   agreed_this_calls=2; incoming_this_accesses=1; incoming_edx_uses=0;
   incoming_stack_parameter_uses=124; direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0;
   attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall
st::fn_00668F50
          (AnonReceiver_0064A970 *this,char *param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  int local_8;

  iVar6 = 0;
  local_8 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_2 == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == (char *)0x9) {
      uVar2 = (*this->vtable->slot_18)();
      if (((-1 < (int)uVar2) && ((int)uVar2 < 8)) &&
         (g_bulkInitializedRecords_008087C7[uVar2].field_0022 != 0xff)) {
        *param_3 = uVar2;
        return 1;
      }
    }
    else if (((int)param_1 < 0) || (7 < (int)param_1)) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_1 == (char *)0x8) {
        if (DAT_0080874d != 0xff) {
          *param_3 = (uint)DAT_0080874d;
          return 1;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      else if (param_1 == (char *)0xff) {
        uVar2 = 0;
        pbVar3 = &g_bulkInitializedRecords_008087C7[0].field_0022;
        do {
          if (*pbVar3 != 0xff) {
            *param_3 = uVar2;
            iVar6 = iVar6 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = param_3 + 1;
          }
          pbVar3 = pbVar3 + 0x51;
          uVar2 = uVar2 + 1;
        } while ((int)pbVar3 < 0x808a71);
        return iVar6;
      }
    }
    else if (g_bulkInitializedRecords_008087C7[(int)param_1].field_0022 != 0xff) {
      *param_3 = (uint)param_1;
      return 1;
    }
  }
  else {
    bVar5 = (byte)param_1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0xffffffff) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_1 == (char *)0x9) {
        uVar2 = (*this->vtable->slot_18)();
        if (((-1 < (int)uVar2) && ((int)uVar2 < 8)) &&
           (g_bulkInitializedRecords_008087C7[uVar2].field_0022 != 0xff)) {
          uVar7 = 0;
          pbVar3 = &g_bulkInitializedRecords_008087C7[0].field_0022;
          do {
            if ((uVar7 != uVar2) && (*pbVar3 != 0xff)) {
              if (DAT_00808a8f == '\0') {
                iVar6 = st::fn_00405D8F(&DAT_00807620,(byte)uVar7,(byte)uVar2);
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023 !=
                        g_bulkInitializedRecords_008087C7[uVar7 & 0xff].field_0023;
              }
              if (bVar9) {
                local_8 = local_8 + 1;
                *param_3 = uVar7;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_3 = param_3 + 1;
              }
            }
            pbVar3 = pbVar3 + 0x51;
            uVar7 = uVar7 + 1;
          } while ((int)pbVar3 < 0x808a71);
          return local_8;
        }
      }
      else if (((int)param_1 < 0) || (7 < (int)param_1)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((param_1 == (char *)0x8) && (DAT_0080874d != 0xff)) {
          uVar2 = 0;
          pbVar3 = &g_bulkInitializedRecords_008087C7[0].field_0022;
          do {
            if ((uVar2 != DAT_0080874d) && (*pbVar3 != 0xff)) {
              if (DAT_00808a8f == '\0') {
                iVar6 = st::fn_00405D8F(&DAT_00807620,(byte)uVar2,DAT_0080874d);
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
                        g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023;
              }
              if (bVar9) {
                *param_3 = uVar2;
                local_8 = local_8 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_3 = param_3 + 1;
              }
            }
            pbVar3 = pbVar3 + 0x51;
            uVar2 = uVar2 + 1;
          } while ((int)pbVar3 < 0x808a71);
          return local_8;
        }
      }
      else if (g_bulkInitializedRecords_008087C7[(int)param_1].field_0022 != 0xff) {
        pcVar8 = nullptr;
        pbVar3 = &g_bulkInitializedRecords_008087C7[0].field_0022;
        do {
          if ((pcVar8 != param_1) && (*pbVar3 != 0xff)) {
            if (DAT_00808a8f == '\0') {
              iVar6 = st::fn_00405D8F(&DAT_00807620,(byte)pcVar8,bVar5);
              bVar9 = iVar6 < 0;
            }
            else {
              bVar9 = g_bulkInitializedRecords_008087C7[(uint)param_1 & 0xff].field_0023 !=
                      g_bulkInitializedRecords_008087C7[(uint)pcVar8 & 0xff].field_0023;
            }
            if (bVar9) {
              local_8 = local_8 + 1;
              *param_3 = (uint)pcVar8;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = param_3 + 1;
            }
          }
          pbVar3 = pbVar3 + 0x51;
          pcVar8 = pcVar8 + 1;
        } while ((int)pbVar3 < 0x808a71);
        return local_8;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_2 == 1) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_1 == (char *)0x9) {
        uVar2 = (*this->vtable->slot_18)();
        if (((-1 < (int)uVar2) && ((int)uVar2 < 8)) &&
           (g_bulkInitializedRecords_008087C7[uVar2].field_0022 != 0xff)) {
          uVar7 = 0;
          pbVar3 = &g_bulkInitializedRecords_008087C7[0].field_0022;
          do {
            if (*pbVar3 != 0xff) {
              if (DAT_00808a8f == '\0') {
                iVar6 = st::fn_00405D8F(&DAT_00807620,(byte)uVar7,(byte)uVar2);
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023 !=
                        g_bulkInitializedRecords_008087C7[uVar7 & 0xff].field_0023;
              }
              if (!bVar9) {
                local_8 = local_8 + 1;
                *param_3 = uVar7;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_3 = param_3 + 1;
              }
            }
            pbVar3 = pbVar3 + 0x51;
            uVar7 = uVar7 + 1;
          } while ((int)pbVar3 < 0x808a71);
          return local_8;
        }
      }
      else if (((int)param_1 < 0) || (7 < (int)param_1)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((param_1 == (char *)0x8) && (DAT_0080874d != 0xff)) {
          uVar2 = 0;
          pbVar3 = &g_bulkInitializedRecords_008087C7[0].field_0022;
          do {
            if (*pbVar3 != 0xff) {
              if (DAT_00808a8f == '\0') {
                iVar6 = st::fn_00405D8F(&DAT_00807620,(byte)uVar2,DAT_0080874d);
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
                        g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023;
              }
              if (!bVar9) {
                *param_3 = uVar2;
                local_8 = local_8 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_3 = param_3 + 1;
              }
            }
            pbVar3 = pbVar3 + 0x51;
            uVar2 = uVar2 + 1;
          } while ((int)pbVar3 < 0x808a71);
          return local_8;
        }
      }
      else if (g_bulkInitializedRecords_008087C7[(int)param_1].field_0022 != 0xff) {
        uVar2 = 0;
        pbVar3 = &g_bulkInitializedRecords_008087C7[0].field_0022;
        do {
          if (*pbVar3 != 0xff) {
            if (DAT_00808a8f == '\0') {
              iVar6 = st::fn_00405D8F(&DAT_00807620,(byte)uVar2,bVar5);
              bVar9 = iVar6 < 0;
            }
            else {
              bVar9 = g_bulkInitializedRecords_008087C7[(uint)param_1 & 0xff].field_0023 !=
                      g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023;
            }
            if (!bVar9) {
              local_8 = local_8 + 1;
              *param_3 = uVar2;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = param_3 + 1;
            }
          }
          pbVar3 = pbVar3 + 0x51;
          uVar2 = uVar2 + 1;
        } while ((int)pbVar3 < 0x808a71);
        return local_8;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_2 == 2) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_1 == (char *)0x9) {
        uVar2 = (*this->vtable->slot_18)();
        if (((-1 < (int)uVar2) && ((int)uVar2 < 8)) &&
           (g_bulkInitializedRecords_008087C7[uVar2].field_0022 != 0xff)) {
          uVar7 = 0;
          pbVar3 = &g_bulkInitializedRecords_008087C7[0].field_0022;
          do {
            if ((uVar7 != uVar2) && (*pbVar3 != 0xff)) {
              if (DAT_00808a8f == '\0') {
                iVar6 = st::fn_00405D8F(&DAT_00807620,(byte)uVar7,(byte)uVar2);
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023 !=
                        g_bulkInitializedRecords_008087C7[uVar7 & 0xff].field_0023;
              }
              if (!bVar9) {
                local_8 = local_8 + 1;
                *param_3 = uVar7;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_3 = param_3 + 1;
              }
            }
            pbVar3 = pbVar3 + 0x51;
            uVar7 = uVar7 + 1;
          } while ((int)pbVar3 < 0x808a71);
          return local_8;
        }
      }
      else if (((int)param_1 < 0) || (7 < (int)param_1)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((param_1 == (char *)0x8) && (DAT_0080874d != 0xff)) {
          uVar2 = 0;
          pbVar3 = &g_bulkInitializedRecords_008087C7[0].field_0022;
          do {
            if ((uVar2 != DAT_0080874d) && (*pbVar3 != 0xff)) {
              if (DAT_00808a8f == '\0') {
                iVar6 = st::fn_00405D8F(&DAT_00807620,(byte)uVar2,DAT_0080874d);
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
                        g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023;
              }
              if (!bVar9) {
                *param_3 = uVar2;
                local_8 = local_8 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_3 = param_3 + 1;
              }
            }
            pbVar3 = pbVar3 + 0x51;
            uVar2 = uVar2 + 1;
          } while ((int)pbVar3 < 0x808a71);
          return local_8;
        }
      }
      else if (g_bulkInitializedRecords_008087C7[(int)param_1].field_0022 != 0xff) {
        pcVar8 = nullptr;
        pbVar3 = &g_bulkInitializedRecords_008087C7[0].field_0022;
        do {
          if ((pcVar8 != param_1) && (*pbVar3 != 0xff)) {
            if (DAT_00808a8f == '\0') {
              if ((byte)pcVar8 == bVar5) {
                iVar6 = 0;
              }
              else {
                uVar2 = (uint)pcVar8 & 0xff;
                uVar7 = (uint)param_1 & 0xff;
                bVar1 = g_playerRelationMatrix[uVar2][uVar7];
                if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                  iVar6 = -2;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                  iVar6 = -1;
                }
                else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 1)) {
                  iVar6 = 1;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar7][uVar2] == 1)) {
                  iVar6 = 2;
                }
                else {
                  iVar6 = 0;
                }
              }
              bVar9 = iVar6 < 0;
            }
            else {
              bVar9 = g_bulkInitializedRecords_008087C7[(uint)param_1 & 0xff].field_0023 !=
                      g_bulkInitializedRecords_008087C7[(uint)pcVar8 & 0xff].field_0023;
            }
            if (!bVar9) {
              *param_3 = (uint)pcVar8;
              local_8 = local_8 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = param_3 + 1;
            }
          }
          pbVar3 = pbVar3 + 0x51;
          pcVar8 = pcVar8 + 1;
        } while ((int)pbVar3 < 0x808a71);
        return local_8;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_2 == 3) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_1 == (char *)0x9) {
        uVar2 = (*this->vtable->slot_18)();
        if (((-1 < (int)uVar2) && ((int)uVar2 < 8)) &&
           (g_bulkInitializedRecords_008087C7[uVar2].field_0022 != 0xff)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = 0;
          pbVar3 = &g_bulkInitializedRecords_008087C7[0].field_0022;
          do {
            if (*pbVar3 != 0xff) {
              if (DAT_00808a8f == '\0') {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if ((char)param_2 == (char)uVar2) {
LAB_00669807:
                  iVar6 = 0;
                }
                else {
                  uVar7 = param_2 & 0xff;
                  uVar4 = uVar2 & 0xff;
                  bVar5 = g_playerRelationMatrix[uVar7][uVar4];
                  if ((bVar5 == 0) && (g_playerRelationMatrix[uVar4][uVar7] == 0)) {
                    iVar6 = -2;
                  }
                  else if ((bVar5 == 1) && (g_playerRelationMatrix[uVar4][uVar7] == 0)) {
                    iVar6 = -1;
                  }
                  else if ((bVar5 == 0) && (g_playerRelationMatrix[uVar4][uVar7] == 1)) {
                    iVar6 = 1;
                  }
                  else {
                    if ((bVar5 != 1) || (g_playerRelationMatrix[uVar4][uVar7] != 1))
                    goto LAB_00669807;
                    iVar6 = 2;
                  }
                }
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023 !=
                        g_bulkInitializedRecords_008087C7[param_2 & 0xff].field_0023;
              }
              if (!bVar9) {
                if (DAT_00808a8f == '\0') {
                  if ((char)uVar2 == (char)param_2) {
LAB_006698b9:
                    iVar6 = 0;
                  }
                  else {
                    uVar7 = param_2 & 0xff;
                    uVar4 = uVar2 & 0xff;
                    bVar5 = g_playerRelationMatrix[uVar4][uVar7];
                    if ((bVar5 == 0) && (g_playerRelationMatrix[uVar7][uVar4] == 0)) {
                      iVar6 = -2;
                    }
                    else if ((bVar5 == 1) && (g_playerRelationMatrix[uVar7][uVar4] == 0)) {
                      iVar6 = -1;
                    }
                    else if ((bVar5 == 0) && (g_playerRelationMatrix[uVar7][uVar4] == 1)) {
                      iVar6 = 1;
                    }
                    else {
                      if ((bVar5 != 1) || (g_playerRelationMatrix[uVar7][uVar4] != 1))
                      goto LAB_006698b9;
                      iVar6 = 2;
                    }
                  }
                  bVar9 = iVar6 < 0;
                }
                else {
                  bVar9 = g_bulkInitializedRecords_008087C7[param_2 & 0xff].field_0023 !=
                          g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023;
                }
                if (!bVar9) {
                  *param_3 = param_2;
                  local_8 = local_8 + 1;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_3 = param_3 + 1;
                }
              }
            }
            pbVar3 = pbVar3 + 0x51;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = param_2 + 1;
            if (0x808a70 < (int)pbVar3) {
              return local_8;
            }
          } while( true );
        }
      }
      else if (((int)param_1 < 0) || (7 < (int)param_1)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((param_1 == (char *)0x8) && (DAT_0080874d != 0xff)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = 0;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (char *)&g_bulkInitializedRecords_008087C7[0].field_0022;
          bVar5 = DAT_0080874d;
          do {
            if (*param_1 != -1) {
              if (DAT_00808a8f == '\0') {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if ((byte)param_2 == bVar5) {
LAB_00669b3a:
                  iVar6 = 0;
                }
                else {
                  uVar2 = param_2 & 0xff;
                  bVar1 = g_playerRelationMatrix[uVar2][bVar5];
                  if ((bVar1 == 0) && (g_playerRelationMatrix[bVar5][uVar2] == 0)) {
                    iVar6 = -2;
                  }
                  else if ((bVar1 == 1) && (g_playerRelationMatrix[bVar5][uVar2] == 0)) {
                    iVar6 = -1;
                  }
                  else if ((bVar1 == 0) && (g_playerRelationMatrix[bVar5][uVar2] == 1)) {
                    iVar6 = 1;
                  }
                  else {
                    if ((bVar1 != 1) || (g_playerRelationMatrix[bVar5][uVar2] != 1))
                    goto LAB_00669b3a;
                    iVar6 = 2;
                  }
                }
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = g_bulkInitializedRecords_008087C7[bVar5].field_0023 !=
                        g_bulkInitializedRecords_008087C7[param_2 & 0xff].field_0023;
              }
              if (!bVar9) {
                if (DAT_00808a8f == '\0') {
                  iVar6 = st::fn_00405D8F(&DAT_00807620,bVar5,(byte)param_2);
                  bVar9 = iVar6 < 0;
                  bVar5 = DAT_0080874d;
                }
                else {
                  bVar9 = g_bulkInitializedRecords_008087C7[param_2 & 0xff].field_0023 !=
                          g_bulkInitializedRecords_008087C7[bVar5].field_0023;
                }
                if (!bVar9) {
                  local_8 = local_8 + 1;
                  *param_3 = param_2;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_3 = param_3 + 1;
                  bVar5 = DAT_0080874d;
                }
              }
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = param_1 + 0x51;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = param_2 + 1;
            if (0x808a70 < (int)param_1) {
              return local_8;
            }
          } while( true );
        }
      }
      else if (g_bulkInitializedRecords_008087C7[(int)param_1].field_0022 != 0xff) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = 0;
        pbVar3 = &g_bulkInitializedRecords_008087C7[0].field_0022;
        do {
          if (*pbVar3 != 0xff) {
            if (DAT_00808a8f == '\0') {
              iVar6 = st::fn_00405D8F(&DAT_00807620,(byte)param_2,bVar5);
              bVar9 = iVar6 < 0;
            }
            else {
              bVar9 = g_bulkInitializedRecords_008087C7[(uint)param_1 & 0xff].field_0023 !=
                      g_bulkInitializedRecords_008087C7[param_2 & 0xff].field_0023;
            }
            if (!bVar9) {
              if (DAT_00808a8f == '\0') {
                if (bVar5 == (byte)param_2) {
LAB_00669a2a:
                  iVar6 = 0;
                }
                else {
                  uVar7 = param_2 & 0xff;
                  uVar2 = (uint)param_1 & 0xff;
                  bVar1 = g_playerRelationMatrix[uVar2][uVar7];
                  if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                    iVar6 = -2;
                  }
                  else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                    iVar6 = -1;
                  }
                  else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 1)) {
                    iVar6 = 1;
                  }
                  else {
                    if ((bVar1 != 1) || (g_playerRelationMatrix[uVar7][uVar2] != 1))
                    goto LAB_00669a2a;
                    iVar6 = 2;
                  }
                }
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = g_bulkInitializedRecords_008087C7[param_2 & 0xff].field_0023 !=
                        g_bulkInitializedRecords_008087C7[(uint)param_1 & 0xff].field_0023;
              }
              if (!bVar9) {
                *param_3 = param_2;
                local_8 = local_8 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_3 = param_3 + 1;
              }
            }
          }
          pbVar3 = pbVar3 + 0x51;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = param_2 + 1;
          if (0x808a70 < (int)pbVar3) {
            return local_8;
          }
        } while( true );
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_2 == 4) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_1 == (char *)0x9) {
        uVar2 = (*this->vtable->slot_18)();
        if (((-1 < (int)uVar2) && ((int)uVar2 < 8)) &&
           (g_bulkInitializedRecords_008087C7[uVar2].field_0022 != 0xff)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = 0;
          pbVar3 = &g_bulkInitializedRecords_008087C7[0].field_0022;
          do {
            if ((param_2 != uVar2) && (*pbVar3 != 0xff)) {
              if (DAT_00808a8f == '\0') {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if ((byte)param_2 == (byte)uVar2) {
LAB_00669cdc:
                  iVar6 = 0;
                }
                else {
                  uVar7 = param_2 & 0xff;
                  uVar4 = uVar2 & 0xff;
                  bVar5 = g_playerRelationMatrix[uVar7][uVar4];
                  if ((bVar5 == 0) && (g_playerRelationMatrix[uVar4][uVar7] == 0)) {
                    iVar6 = -2;
                  }
                  else if ((bVar5 == 1) && (g_playerRelationMatrix[uVar4][uVar7] == 0)) {
                    iVar6 = -1;
                  }
                  else if ((bVar5 == 0) && (g_playerRelationMatrix[uVar4][uVar7] == 1)) {
                    iVar6 = 1;
                  }
                  else {
                    if ((bVar5 != 1) || (g_playerRelationMatrix[uVar4][uVar7] != 1))
                    goto LAB_00669cdc;
                    iVar6 = 2;
                  }
                }
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023 !=
                        g_bulkInitializedRecords_008087C7[param_2 & 0xff].field_0023;
              }
              if (!bVar9) {
                if (DAT_00808a8f == '\0') {
                  iVar6 = st::fn_00405D8F(&DAT_00807620,(byte)uVar2,(byte)param_2);
                  bVar9 = iVar6 < 0;
                }
                else {
                  bVar9 = g_bulkInitializedRecords_008087C7[param_2 & 0xff].field_0023 !=
                          g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023;
                }
                if (!bVar9) {
                  *param_3 = param_2;
                  local_8 = local_8 + 1;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_3 = param_3 + 1;
                }
              }
            }
            pbVar3 = pbVar3 + 0x51;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = param_2 + 1;
            if (0x808a70 < (int)pbVar3) {
              return local_8;
            }
          } while( true );
        }
      }
      else if (((int)param_1 < 0) || (7 < (int)param_1)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((param_1 == (char *)0x8) && (DAT_0080874d != 0xff)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = 0;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (char *)&g_bulkInitializedRecords_008087C7[0].field_0022;
          do {
            if ((param_2 != DAT_0080874d) && (*param_1 != -1)) {
              if (DAT_00808a8f == '\0') {
                iVar6 = st::fn_00405D8F(&DAT_00807620,(byte)param_2,DAT_0080874d);
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
                        g_bulkInitializedRecords_008087C7[param_2 & 0xff].field_0023;
              }
              if (!bVar9) {
                if (DAT_00808a8f == '\0') {
                  if (DAT_0080874d == (byte)param_2) {
LAB_0066a08e:
                    iVar6 = 0;
                  }
                  else {
                    uVar7 = param_2 & 0xff;
                    uVar2 = (uint)DAT_0080874d;
                    bVar5 = g_playerRelationMatrix[uVar2][uVar7];
                    if ((bVar5 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                      iVar6 = -2;
                    }
                    else if ((bVar5 == 1) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                      iVar6 = -1;
                    }
                    else if ((bVar5 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 1)) {
                      iVar6 = 1;
                    }
                    else {
                      if ((bVar5 != 1) || (g_playerRelationMatrix[uVar7][uVar2] != 1))
                      goto LAB_0066a08e;
                      iVar6 = 2;
                    }
                  }
                  bVar9 = iVar6 < 0;
                }
                else {
                  bVar9 = g_bulkInitializedRecords_008087C7[param_2 & 0xff].field_0023 !=
                          g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023;
                }
                if (!bVar9) {
                  *param_3 = param_2;
                  local_8 = local_8 + 1;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_3 = param_3 + 1;
                }
              }
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = param_1 + 0x51;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = param_2 + 1;
            if (0x808a70 < (int)param_1) {
              return local_8;
            }
          } while( true );
        }
      }
      else if (g_bulkInitializedRecords_008087C7[(int)param_1].field_0022 != 0xff) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = 0;
        pbVar3 = &g_bulkInitializedRecords_008087C7[0].field_0022;
        do {
          if (((char *)param_2 != param_1) && (*pbVar3 != 0xff)) {
            if (DAT_00808a8f == '\0') {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              if ((byte)param_2 == bVar5) {
LAB_00669e52:
                iVar6 = 0;
              }
              else {
                uVar2 = param_2 & 0xff;
                uVar7 = (uint)param_1 & 0xff;
                bVar1 = g_playerRelationMatrix[uVar2][uVar7];
                if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                  iVar6 = -2;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                  iVar6 = -1;
                }
                else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 1)) {
                  iVar6 = 1;
                }
                else {
                  if ((bVar1 != 1) || (g_playerRelationMatrix[uVar7][uVar2] != 1))
                  goto LAB_00669e52;
                  iVar6 = 2;
                }
              }
              bVar9 = iVar6 < 0;
            }
            else {
              bVar9 = g_bulkInitializedRecords_008087C7[(uint)param_1 & 0xff].field_0023 !=
                      g_bulkInitializedRecords_008087C7[param_2 & 0xff].field_0023;
            }
            if (!bVar9) {
              if (DAT_00808a8f == '\0') {
                if (bVar5 == (byte)param_2) {
LAB_00669f03:
                  iVar6 = 0;
                }
                else {
                  uVar2 = param_2 & 0xff;
                  uVar7 = (uint)param_1 & 0xff;
                  bVar1 = g_playerRelationMatrix[uVar7][uVar2];
                  if ((bVar1 == 0) && (g_playerRelationMatrix[uVar2][uVar7] == 0)) {
                    iVar6 = -2;
                  }
                  else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar2][uVar7] == 0)) {
                    iVar6 = -1;
                  }
                  else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar2][uVar7] == 1)) {
                    iVar6 = 1;
                  }
                  else {
                    if ((bVar1 != 1) || (g_playerRelationMatrix[uVar2][uVar7] != 1))
                    goto LAB_00669f03;
                    iVar6 = 2;
                  }
                }
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = g_bulkInitializedRecords_008087C7[param_2 & 0xff].field_0023 !=
                        g_bulkInitializedRecords_008087C7[(uint)param_1 & 0xff].field_0023;
              }
              if (!bVar9) {
                *param_3 = param_2;
                local_8 = local_8 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_3 = param_3 + 1;
              }
            }
          }
          pbVar3 = pbVar3 + 0x51;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = param_2 + 1;
          if (0x808a70 < (int)pbVar3) {
            return local_8;
          }
        } while( true );
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_2 == 0xfffffffe) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_1 == (char *)0x9) {
        uVar2 = (*this->vtable->slot_18)();
        if (((-1 < (int)uVar2) && ((int)uVar2 < 8)) &&
           (g_bulkInitializedRecords_008087C7[uVar2].field_0022 != 0xff)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = 0;
          pbVar3 = &g_bulkInitializedRecords_008087C7[0].field_0022;
          do {
            if ((param_2 != uVar2) && (*pbVar3 != 0xff)) {
              if (DAT_00808a8f == '\0') {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if ((byte)param_2 == (byte)uVar2) {
LAB_0066a1c9:
                  iVar6 = 0;
                }
                else {
                  uVar7 = param_2 & 0xff;
                  uVar4 = uVar2 & 0xff;
                  bVar5 = g_playerRelationMatrix[uVar7][uVar4];
                  if ((bVar5 == 0) && (g_playerRelationMatrix[uVar4][uVar7] == 0)) {
                    iVar6 = -2;
                  }
                  else if ((bVar5 == 1) && (g_playerRelationMatrix[uVar4][uVar7] == 0)) {
                    iVar6 = -1;
                  }
                  else if ((bVar5 == 0) && (g_playerRelationMatrix[uVar4][uVar7] == 1)) {
                    iVar6 = 1;
                  }
                  else {
                    if ((bVar5 != 1) || (g_playerRelationMatrix[uVar4][uVar7] != 1))
                    goto LAB_0066a1c9;
                    iVar6 = 2;
                  }
                }
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023 !=
                        g_bulkInitializedRecords_008087C7[param_2 & 0xff].field_0023;
              }
              if (!bVar9) {
                if (DAT_00808a8f == '\0') {
                  iVar6 = st::fn_00405D8F(&DAT_00807620,(byte)uVar2,(byte)param_2);
                  bVar9 = iVar6 < 0;
                }
                else {
                  bVar9 = g_bulkInitializedRecords_008087C7[param_2 & 0xff].field_0023 !=
                          g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023;
                }
                if (!bVar9) goto LAB_0066a23c;
              }
              *param_3 = param_2;
              local_8 = local_8 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = param_3 + 1;
            }
LAB_0066a23c:
            pbVar3 = pbVar3 + 0x51;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = param_2 + 1;
            if (0x808a70 < (int)pbVar3) {
              return local_8;
            }
          } while( true );
        }
      }
      else if (((int)param_1 < 0) || (7 < (int)param_1)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((param_1 == (char *)0x8) && (DAT_0080874d != 0xff)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = 0;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (char *)&g_bulkInitializedRecords_008087C7[0].field_0022;
          do {
            if ((param_2 != DAT_0080874d) && (*param_1 != -1)) {
              if (DAT_00808a8f == '\0') {
                iVar6 = st::fn_00405D8F(&DAT_00807620,(byte)param_2,DAT_0080874d);
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
                        g_bulkInitializedRecords_008087C7[param_2 & 0xff].field_0023;
              }
              if (!bVar9) {
                if (DAT_00808a8f == '\0') {
                  if (DAT_0080874d == (byte)param_2) {
LAB_0066a57d:
                    iVar6 = 0;
                  }
                  else {
                    uVar7 = param_2 & 0xff;
                    uVar2 = (uint)DAT_0080874d;
                    bVar5 = g_playerRelationMatrix[uVar2][uVar7];
                    if ((bVar5 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                      iVar6 = -2;
                    }
                    else if ((bVar5 == 1) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                      iVar6 = -1;
                    }
                    else if ((bVar5 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 1)) {
                      iVar6 = 1;
                    }
                    else {
                      if ((bVar5 != 1) || (g_playerRelationMatrix[uVar7][uVar2] != 1))
                      goto LAB_0066a57d;
                      iVar6 = 2;
                    }
                  }
                  bVar9 = iVar6 < 0;
                }
                else {
                  bVar9 = g_bulkInitializedRecords_008087C7[param_2 & 0xff].field_0023 !=
                          g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023;
                }
                if (!bVar9) goto LAB_0066a598;
              }
              *param_3 = param_2;
              local_8 = local_8 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = param_3 + 1;
            }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_0066a598:
            param_1 = param_1 + 0x51;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = param_2 + 1;
          } while ((int)param_1 < 0x808a71);
        }
      }
      else if (g_bulkInitializedRecords_008087C7[(int)param_1].field_0022 != 0xff) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = 0;
        pbVar3 = &g_bulkInitializedRecords_008087C7[0].field_0022;
        do {
          if (((char *)param_2 != param_1) && (*pbVar3 != 0xff)) {
            if (DAT_00808a8f == '\0') {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              if ((byte)param_2 == bVar5) {
LAB_0066a341:
                iVar6 = 0;
              }
              else {
                uVar2 = param_2 & 0xff;
                uVar7 = (uint)param_1 & 0xff;
                bVar1 = g_playerRelationMatrix[uVar2][uVar7];
                if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                  iVar6 = -2;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                  iVar6 = -1;
                }
                else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 1)) {
                  iVar6 = 1;
                }
                else {
                  if ((bVar1 != 1) || (g_playerRelationMatrix[uVar7][uVar2] != 1))
                  goto LAB_0066a341;
                  iVar6 = 2;
                }
              }
              bVar9 = iVar6 < 0;
            }
            else {
              bVar9 = g_bulkInitializedRecords_008087C7[(uint)param_1 & 0xff].field_0023 !=
                      g_bulkInitializedRecords_008087C7[param_2 & 0xff].field_0023;
            }
            if (!bVar9) {
              if (DAT_00808a8f == '\0') {
                if (bVar5 == (byte)param_2) {
LAB_0066a3f2:
                  iVar6 = 0;
                }
                else {
                  uVar2 = param_2 & 0xff;
                  uVar7 = (uint)param_1 & 0xff;
                  bVar1 = g_playerRelationMatrix[uVar7][uVar2];
                  if ((bVar1 == 0) && (g_playerRelationMatrix[uVar2][uVar7] == 0)) {
                    iVar6 = -2;
                  }
                  else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar2][uVar7] == 0)) {
                    iVar6 = -1;
                  }
                  else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar2][uVar7] == 1)) {
                    iVar6 = 1;
                  }
                  else {
                    if ((bVar1 != 1) || (g_playerRelationMatrix[uVar2][uVar7] != 1))
                    goto LAB_0066a3f2;
                    iVar6 = 2;
                  }
                }
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = g_bulkInitializedRecords_008087C7[param_2 & 0xff].field_0023 !=
                        g_bulkInitializedRecords_008087C7[(uint)param_1 & 0xff].field_0023;
              }
              if (!bVar9) goto LAB_0066a419;
            }
            *param_3 = param_2;
            local_8 = local_8 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = param_3 + 1;
          }
LAB_0066a419:
          pbVar3 = pbVar3 + 0x51;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = param_2 + 1;
          if (0x808a70 < (int)pbVar3) {
            return local_8;
          }
        } while( true );
      }
    }
  }
  return local_8;
}

// 00672440 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::FUN_00672440
#line 4 "decomp/ST.exe/functions/00672440/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970.
   Evidence: incoming_receiver_captures=1; receiver_accesses=14; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=5

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00672440 -> 0064A910 @ 006724CA */

int __thiscall
st::fn_00672440
          (AnonReceiver_0064A970 *this,AnonShape_00683780_11EA4E23 *param_1,int param_2,
          short *param_3)

{
  AnonReceiver_0064A970 *pAVar1;
  int iVar2;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  float10 fVar6;
  InternalExceptionFrame local_64;
  int local_20;
  AnonReceiver_0064A970 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  float *local_c;
  int local_8;

  local_8 = param_2;
  local_18 = -1;
  local_10 = 0;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_1c = this;
  iVar2 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  pAVar1 = local_1c;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_64.previous;
    if (0 < iVar2) {
      iVar2 = -0x6b;
    }
    return iVar2;
  }
  st::fn_0072E340(&local_1c->field_0x4,&DAT_008016a0,0x7f);
  *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
  if (param_3 != nullptr) {
    psVar5 = param_3;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      psVar5[0] = 0;
      psVar5[1] = 0;
      psVar5 = psVar5 + 2;
    }
    *psVar5 = 0;
  }
  do {
    while( true ) {
      if (local_10 != 0) {
        g_currentExceptionFrame = local_64.previous;
        return local_18;
      }
      pcVar2 = st::fn_00403779(param_1,local_8);
      if (pcVar2 != nullptr) break;
      *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-4,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    switch(*pcVar2) {
    case '\b':
      if (param_3 != nullptr) {
        if (0x31 < *param_3) {
          *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x66,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 8;
        uVar3 = (*pAVar1->vtable->slot_00)(pcVar2);
        *(undefined4 *)(param_3 + *param_3 * 2 + 4) = uVar3;
        *param_3 = *param_3 + 1;
        param_3[2] = param_3[2] + 1;
      }
      local_8 = local_8 + 1;
      break;
    case '\t':
      if (param_3 != nullptr) {
        if (0x31 < *param_3) {
          *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x66,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 9;
        fVar6 = (float10)(*pAVar1->vtable->slot_04)(pcVar2);
        *(float *)(param_3 + *param_3 * 2 + 4) = (float)fVar6;
        *param_3 = *param_3 + 1;
        param_3[3] = param_3[3] + 1;
      }
      local_8 = local_8 + 1;
      break;
    case '\n':
      if (param_3 != nullptr) {
        if (0x31 < *param_3) {
          *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x66,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 10;
        uVar3 = (*pAVar1->vtable->slot_08)(pcVar2);
        *(undefined4 *)(param_3 + *param_3 * 2 + 4) = uVar3;
        if (*(int *)(param_3 + *param_3 * 2 + 4) == 0) {
          *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x6b,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        *param_3 = *param_3 + 1;
        param_3[1] = param_3[1] + 1;
      }
      local_8 = local_8 + 1;
      break;
    case '\v':
      local_18 = (int)*(short *)(pcVar2 + 1);
      local_10 = 1;
      break;
    default:
      local_c = st::fn_00401F5F((int)pcVar2,&local_14,&local_20);
      if (local_c == nullptr) {
        *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
LAB_0067276f:
        st::fn_006A5E40(local_14,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      else if (local_14 == 1) {
        if (param_3 != nullptr) {
          if (0x31 < *param_3) {
            *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x66,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 8;
          *(float *)(param_3 + *param_3 * 2 + 4) = *local_c;
          *param_3 = *param_3 + 1;
          param_3[2] = param_3[2] + 1;
        }
      }
      else if (local_14 == 2) {
        if (param_3 != nullptr) {
          if (0x31 < *param_3) {
            *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x66,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 9;
          *(float *)(param_3 + *param_3 * 2 + 4) = *local_c;
          *param_3 = *param_3 + 1;
          param_3[3] = param_3[3] + 1;
        }
      }
      else {
        if (local_14 != 3) {
          *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
          goto LAB_0067276f;
        }
        if (param_3 != nullptr) {
          if (0x31 < *param_3) {
            *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x66,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 10;
          *(float *)(param_3 + *param_3 * 2 + 4) = *local_c;
          *param_3 = *param_3 + 1;
          param_3[1] = param_3[1] + 1;
        }
      }
      if (local_c != nullptr) {
        st::fn_006AB060(&local_c);
      }
      local_8 = local_8 + local_20;
    }
  } while( true );
}

