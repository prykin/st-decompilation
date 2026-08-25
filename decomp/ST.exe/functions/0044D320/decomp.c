#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0044D320_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_8=8;CASE_10=16;CASE_28=40
   [STAbiConsistencyApplier] pointer_return_element_width target=return:-1: return=/byte *32
   Evidence: generic returned address is dereferenced with one consistent machine width across
   callers; width=1, sites=0043BEB0 @ 0043C2BE MOV BL,byte ptr [EAX + 0x1] | 0043BEB0 @ 0043C2C7 MOV
   BL,byte ptr [EAX + -0x2] */

byte * FUN_0044d320(Global_sub_0044D320_param_1Enum param_1)

{
  short sVar1;
  Global_sub_0044D320_param_1Enum GVar2;
  byte *pbVar3;
  STGameObjC *this;
  int local_EAX_1172;
  int local_EAX_1269;
  int local_EAX_1351;
  int iVar5;
  int local_EAX_1434;
  int local_EAX_1608;
  int local_EAX_1709;
  int local_EAX_1797;
  int local_EAX_1904;
  int local_EAX_2097;
  uint uVar6;
  int local_EAX_2244;
  int local_EAX_2370;
  uint uVar7;
  int local_EAX_2562;
  int iVar4;
  undefined4 local_18;
  DArrayTy *local_14;
  dword local_10;
  STAllPlayersC *local_c;
  int local_8;

  GVar2 = param_1;
  local_8 = 0;
  local_14 = (DArrayTy *)g_packedRecords_A62x8[DAT_0080874d].field102_0x16d;
  local_10 = local_14->count;
  pbVar3 = Library::DKW::LIB::MemAlloc(0xc);
  if (param_1 < 0x1001) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == 0x1000) {
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 0;
      pbVar3[3] = 3;
      pbVar3[4] = 1;
      pbVar3[5] = 1;
      pbVar3[6] = 0;
      pbVar3[7] = 4;
      pbVar3[8] = 1;
      pbVar3[9] = 0x2f;
      pbVar3[10] = 1;
      pbVar3[0xb] = 0xb;
    }
    else if (param_1 < 0x41) {
      if (param_1 == 0x40) {
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 3;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 4;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 0;
        pbVar3[0xb] = 9;
      }
      else {
        switch(param_1) {
        case CASE_1:
          pbVar3[0] = 1;
          pbVar3[1] = 2;
          pbVar3[2] = 1;
          pbVar3[3] = 3;
          pbVar3[4] = 1;
          pbVar3[5] = 1;
          pbVar3[6] = 0;
          pbVar3[7] = 4;
          pbVar3[8] = 1;
          pbVar3[9] = 0x2f;
          pbVar3[10] = 1;
          pbVar3[0xb] = 7;
          break;
        case CASE_2:
        case CASE_4:
        case CASE_8:
          pbVar3[0] = 1;
          pbVar3[1] = 2;
          pbVar3[2] = 1;
          pbVar3[3] = 3;
          pbVar3[4] = 1;
          pbVar3[5] = 1;
          pbVar3[6] = 0;
          pbVar3[7] = 4;
          pbVar3[8] = 1;
          pbVar3[9] = 0x2f;
          pbVar3[10] = 0;
          pbVar3[0xb] = 8;
          break;
        default:
          goto switchD_0044d3a8_caseD_3;
        case CASE_10:
          pbVar3[0] = 1;
          pbVar3[1] = 2;
          pbVar3[2] = 1;
          pbVar3[3] = 3;
          pbVar3[4] = 1;
          pbVar3[5] = 1;
          pbVar3[6] = 0;
          pbVar3[7] = 4;
          pbVar3[8] = 1;
          pbVar3[9] = 0x2f;
          pbVar3[10] = 1;
          pbVar3[0xb] = 10;
          break;
        case CASE_28:
          pbVar3[0] = 1;
          pbVar3[1] = 2;
          pbVar3[2] = 1;
          pbVar3[3] = 3;
          pbVar3[4] = 1;
          pbVar3[5] = 1;
          pbVar3[6] = 0;
          pbVar3[7] = 4;
          pbVar3[8] = 1;
          pbVar3[9] = 0x2f;
          pbVar3[10] = 1;
          pbVar3[0xb] = 0xb;
        }
      }
    }
    else if (param_1 < 0x201) {
      if (param_1 == 0x200) {
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 0x11;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 4;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 1;
        pbVar3[0xb] = 0x12;
      }
      else {
        if ((param_1 != 0x80) && (param_1 != 0x100)) {
          return pbVar3;
        }
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 3;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 0;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 1;
        pbVar3[0xb] = 0;
      }
    }
    else if (param_1 == 0x400) {
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 0xd;
      pbVar3[4] = 1;
      pbVar3[5] = 1;
      pbVar3[6] = 0;
      pbVar3[7] = 4;
      pbVar3[8] = 1;
      pbVar3[9] = 0x2f;
      pbVar3[10] = 1;
      pbVar3[0xb] = 0x13;
    }
    else {
      if (param_1 != 0x800) {
        return pbVar3;
      }
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 0xe;
      pbVar3[4] = 1;
      pbVar3[5] = 1;
      pbVar3[6] = 0;
      pbVar3[7] = 4;
      pbVar3[8] = 1;
      pbVar3[9] = 0x2f;
      pbVar3[10] = 1;
      pbVar3[0xb] = 0x10;
    }
    goto LAB_0044d710;
  }
  if (param_1 < 0x100001) {
    if (param_1 == 0x100000) {
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 0x10;
      goto LAB_0044d6f8;
    }
    if (param_1 < 0x20001) {
      if (param_1 == 0x20000) {
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 0x11;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 0x48;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 1;
        pbVar3[0xb] = 0x12;
      }
      else if (param_1 == 0x2000) {
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 3;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 4;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 1;
        pbVar3[0xb] = 6;
      }
      else {
        if (param_1 != 0x10000) {
          return pbVar3;
        }
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 3;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 0x48;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 1;
        pbVar3[0xb] = 7;
      }
    }
    else {
      if (param_1 == 0x40000) {
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 0xe;
        goto LAB_0044d6d7;
      }
      if (param_1 != 0x80000) {
        return pbVar3;
      }
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 3;
      pbVar3[4] = 1;
      pbVar3[5] = 1;
      pbVar3[6] = 0;
      pbVar3[7] = 0x48;
      pbVar3[8] = 1;
      pbVar3[9] = 0x2f;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0x49;
    }
  }
  else {
    if (param_1 < 0x800001) {
      if (param_1 == 0x800000) {
LAB_0044d6cc:
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 3;
LAB_0044d6d7:
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 0x48;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 1;
        pbVar3[0xb] = 0;
        goto LAB_0044d710;
      }
      if (param_1 != 0x200000) {
        if (param_1 != 0x400000) {
          return pbVar3;
        }
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 3;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 0x48;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 0;
        pbVar3[0xb] = 8;
        goto LAB_0044d710;
      }
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 0x13;
    }
    else {
      if (param_1 != 0x1000000) {
        if (param_1 != 0x2000000) {
          return pbVar3;
        }
        goto LAB_0044d6cc;
      }
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 0;
    }
LAB_0044d6f8:
    pbVar3[4] = 1;
    pbVar3[5] = 1;
    pbVar3[6] = 0;
    pbVar3[7] = 0x48;
    pbVar3[8] = 1;
    pbVar3[9] = 0x2f;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0x18;
  }
LAB_0044d710:
  auto param_1_after_write = 0; /* compiler stack-slot lifetime split */
  if (0 < (int)local_10) {
    do {
      DArrayGetElement(local_14,param_1_after_write,&local_18);
      if (((ushort)local_18 != 0xffff) &&
         /* ST_CALLSITE[0044D74B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
         (this = STAllPlayersC::GetObjPtr(local_c,DAT_0080874d,(ushort)local_18,CASE_1),
         this != nullptr)) {
        if (GVar2 < 0x1001) {
          if (GVar2 == 0x1000) {
switchD_0044d78f_caseD_28:
            /* ST_CALLSITE[0044DA6F]: CALL dword ptr [EDX + 0x2c] */
            iVar5 = this->vfunc_2C();
            if ((iVar5 == 0x16) || (iVar5 == 0x25)) {
              local_8 = 1;
              if ((pbVar3[6] == 0) &&
                 ((local_EAX_1904 = thunk_FUN_00486b40(this), 0 < local_EAX_1904 &&
                  ((short)g_packedRecords_A62x8[(char)this->field_0024].field94_0x15b != 0)))) {
                pbVar3[6] = 1;
                pbVar3[7] = 4;
              }
              if ((pbVar3[0xb] == 0xb) && (this->field_0732 == 1)) {
                pbVar3[10] = 1;
                pbVar3[0xb] = 0xc;
              }
            }
          }
          else if (GVar2 < 0x41) {
            if (GVar2 == 0x40) {
              /* ST_CALLSITE[0044D89E]: CALL dword ptr [EDX + 0x2c] */
              iVar5 = this->vfunc_2C();
              if (iVar5 == 4) {
                local_8 = 1;
                if (((pbVar3[6] == 0) &&
                    (local_EAX_1434 = thunk_FUN_00486b40(this), 0 < local_EAX_1434)) &&
                   ((short)g_packedRecords_A62x8[(char)this->field_0024].field94_0x15b != 0)) {
                  pbVar3[6] = 1;
                  pbVar3[7] = 4;
                }
                if ((pbVar3[10] == 0) && (0 < this->field_07BE)) {
                  pbVar3[10] = 1;
                  pbVar3[0xb] = 9;
                }
              }
            }
            else {
              switch(GVar2) {
              case CASE_1:
                /* ST_CALLSITE[0044D79A]: CALL dword ptr [EAX + 0x2c] */
                iVar5 = this->vfunc_2C();
                if ((iVar5 == 6) || (iVar5 == 0x12)) {
                  local_8 = 1;
                  local_EAX_1172 = thunk_FUN_00486b40(this);
                  if (0 < local_EAX_1172) {
                    sVar1 = (short)g_packedRecords_A62x8[(char)this->field_0024].field94_0x15b;
joined_r0x0044d9f5:
                    if (sVar1 != 0) {
                      pbVar3[6] = 1;
                      pbVar3[7] = 4;
                      return pbVar3;
                    }
                  }
                }
                break;
              case CASE_2:
              case CASE_4:
              case CASE_8:
                /* ST_CALLSITE[0044D7EB]: CALL dword ptr [EDX + 0x2c] */
                iVar5 = this->vfunc_2C();
                if (((iVar5 == 5) || (iVar5 == 0xb)) || (iVar5 == 0x11)) {
                  local_8 = 1;
                  if (((pbVar3[6] == 0) &&
                      (local_EAX_1269 = thunk_FUN_00486b40(this), 0 < local_EAX_1269)) &&
                     ((short)g_packedRecords_A62x8[(char)this->field_0024].field94_0x15b != 0))
                  {
                    pbVar3[6] = 1;
                    pbVar3[7] = 4;
                  }
LAB_0044dc25:
                  if ((pbVar3[10] == 0) && (0 < this->field_07BE)) {
                    pbVar3[10] = 1;
                    pbVar3[0xb] = 8;
                  }
                }
                break;
              case CASE_10:
                /* ST_CALLSITE[0044D852]: CALL dword ptr [EDX + 0x2c] */
                iVar5 = this->vfunc_2C();
                if (iVar5 == 0x17) {
                  local_8 = 1;
                  local_EAX_1351 = thunk_FUN_00486b40(this);
                  if (0 < local_EAX_1351) {
                    sVar1 = (short)g_packedRecords_A62x8[(char)this->field_0024].field94_0x15b;
                    goto joined_r0x0044d9f5;
                  }
                }
                break;
              case CASE_28:
                goto switchD_0044d78f_caseD_28;
              }
            }
          }
          else if (GVar2 < 0x201) {
            if (GVar2 == 0x200) {
              /* ST_CALLSITE[0044D94E]: CALL dword ptr [EAX + 0x2c] */
              iVar5 = this->vfunc_2C();
              if ((iVar5 == 8) || (iVar5 == 0x14)) {
                local_8 = 1;
                local_EAX_1608 = thunk_FUN_00486b40(this);
                if (0 < local_EAX_1608) {
                  sVar1 = (short)g_packedRecords_A62x8[(char)this->field_0024].field94_0x15b;
                  goto joined_r0x0044d9f5;
                }
              }
            }
            else if ((GVar2 == 0x80) || (GVar2 == 0x100)) {
              /* ST_CALLSITE[0044D930]: CALL dword ptr [EDX + 0x2c] */
              iVar5 = this->vfunc_2C();
              if (iVar5 == 9) {
                return pbVar3;
              }
              if (iVar5 == 0x15) {
                return pbVar3;
              }
            }
          }
          else if (GVar2 == 0x400) {
            /* ST_CALLSITE[0044DA04]: CALL dword ptr [EDX + 0x2c] */
            iVar5 = this->vfunc_2C();
            if ((iVar5 == 7) || (iVar5 == 0x13)) {
              local_8 = 1;
              if ((pbVar3[6] == 0) &&
                 ((local_EAX_1797 = thunk_FUN_00486b40(this), 0 < local_EAX_1797 &&
                  ((short)g_packedRecords_A62x8[(char)this->field_0024].field94_0x15b != 0)))) {
                pbVar3[6] = 1;
                pbVar3[7] = 4;
              }
              iVar5 = thunk_FUN_00492370(this);
              if (iVar5 != 0) {
                pbVar3[10] = 1;
                pbVar3[0xb] = 0x14;
              }
            }
          }
          else if ((GVar2 == 0x800) &&
                  /* ST_CALLSITE[0044D9B3]: CALL dword ptr [EDX + 0x2c] */
                  ((iVar5 = this->vfunc_2C(), iVar5 == 0xc || (iVar5 == 0x18)))) {
LAB_0044d9c4:
            local_8 = 1;
            local_EAX_1709 = thunk_FUN_00486b40(this);
            if (0 < local_EAX_1709) {
              sVar1 = (short)g_packedRecords_A62x8[(char)this->field_0024].field94_0x15b;
              goto joined_r0x0044d9f5;
            }
          }
        }
        else if (GVar2 < 0x100001) {
          if (GVar2 == 0x100000) {
            /* ST_CALLSITE[0044DB3C]: CALL dword ptr [EDX + 0x2c] */
            iVar5 = this->vfunc_2C();
            if (iVar5 == 0x1d) {
              local_8 = 1;
              /* ST_CALLSITE[0044DB51]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
              local_EAX_2097 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)this);
              if (((0 < local_EAX_2097) &&
                  (uVar6 = thunk_FUN_004e41c0((uint)DAT_0080874d), 0 < (int)uVar6)) &&
                 ((short)g_packedRecords_A62x8[(char)this->field_0024].field95_0x15f != 0)) {
                pbVar3[6] = 1;
                pbVar3[7] = 0x48;
              }
LAB_0044dcbe:
              iVar5 = thunk_FUN_004e60d0((uint)DAT_0080874d,0x5f);
              if (0 < iVar5) {
                iVar5 = this->field_071E;
joined_r0x0044ddc7:
                if (9 < iVar5) {
                  pbVar3[10] = 1;
                  pbVar3[0xb] = 0x18;
                }
              }
            }
          }
          else {
            if (GVar2 < 0x20001) {
              if (GVar2 != 0x20000) {
                if (GVar2 == 0x2000) goto LAB_0044d9c4;
                if (GVar2 != 0x10000) goto cf_continue_loop_0044DDCF;
              }
            }
            else if ((GVar2 != 0x40000) && (GVar2 != 0x80000)) goto cf_continue_loop_0044DDCF;
LAB_0044dce3:
            /* ST_CALLSITE[0044DCE7]: CALL dword ptr [EDX + 0x2c] */
            uVar7 = this->vfunc_2C();
            switch(uVar7) {
            case 0x19:
            case 0x1a:
            case 0x1c:
            case 0x22:
            case 0x23:
switchD_0044dcfe_caseD_19:
              local_8 = 1;
              /* ST_CALLSITE[0044DD22]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
              local_EAX_2562 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)this);
              if (((0 < local_EAX_2562) &&
                  (uVar6 = thunk_FUN_004e41c0((uint)DAT_0080874d), 0 < (int)uVar6)) &&
                 ((short)g_packedRecords_A62x8[(char)this->field_0024].field95_0x15f != 0)) {
                pbVar3[6] = 1;
                pbVar3[7] = 0x48;
                return pbVar3;
              }
            }
          }
        }
        else if (GVar2 < 0x800001) {
          if (GVar2 == 0x800000) goto LAB_0044dce3;
          if (GVar2 == 0x200000) {
            /* ST_CALLSITE[0044DC4D]: CALL dword ptr [EAX + 0x2c] */
            iVar5 = this->vfunc_2C();
            if (iVar5 == 0x1b) {
              local_8 = 1;
              /* ST_CALLSITE[0044DC62]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
              local_EAX_2370 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)this);
              if (((0 < local_EAX_2370) &&
                  (uVar6 = thunk_FUN_004e41c0((uint)DAT_0080874d), 0 < (int)uVar6)) &&
                 ((short)g_packedRecords_A62x8[(char)this->field_0024].field95_0x15f != 0)) {
                pbVar3[6] = 1;
                pbVar3[7] = 0x48;
              }
              iVar5 = thunk_FUN_00492370(this);
              if (iVar5 != 0) {
                pbVar3[2] = 1;
                pbVar3[3] = 0x14;
              }
              goto LAB_0044dcbe;
            }
          }
          /* ST_CALLSITE[0044DBCF]: CALL dword ptr [EAX + 0x2c] */
          else if ((GVar2 == 0x400000) && (iVar5 = this->vfunc_2C(), iVar5 == 0x21))
          {
            local_8 = 1;
            /* ST_CALLSITE[0044DBE4]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
            local_EAX_2244 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)this);
            if ((0 < local_EAX_2244) &&
               ((uVar6 = thunk_FUN_004e41c0((uint)DAT_0080874d), 0 < (int)uVar6 &&
                ((short)g_packedRecords_A62x8[(char)this->field_0024].field95_0x15f != 0)))) {
              pbVar3[6] = 1;
              pbVar3[7] = 0x48;
            }
            goto LAB_0044dc25;
          }
        }
        else if (GVar2 == 0x1000000) {
          /* ST_CALLSITE[0044DD6F]: CALL dword ptr [EDX + 0x2c] */
          iVar5 = this->vfunc_2C();
          if (iVar5 == 0x24) {
            local_8 = 1;
            /* ST_CALLSITE[0044DD80]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
            iVar4 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)this);
            if (((0 < iVar4) && (uVar6 = thunk_FUN_004e41c0((uint)DAT_0080874d), 0 < (int)uVar6)) &&
               ((short)g_packedRecords_A62x8[(char)this->field_0024].field95_0x15f != 0)) {
              pbVar3[6] = 1;
              pbVar3[7] = 0x48;
            }
            iVar5 = this->field_071E;
            goto joined_r0x0044ddc7;
          }
        }
        else if (GVar2 == 0x2000000) goto switchD_0044dcfe_caseD_19;
      }
cf_continue_loop_0044DDCF:
      param_1_after_write = param_1_after_write + CASE_1;
    } while ((int)param_1_after_write < (int)local_10);
    if (local_8 != 0) {
      return pbVar3;
    }
  }
  pbVar3[10] = 1;
  pbVar3[0xb] = 0;
  pbVar3[8] = 1;
  pbVar3[9] = 0;
  pbVar3[6] = 1;
  pbVar3[7] = 0;
  pbVar3[4] = 1;
  pbVar3[5] = 0;
  pbVar3[2] = 1;
  pbVar3[3] = 0;
  pbVar3[0] = 1;
  pbVar3[1] = 0;
switchD_0044d3a8_caseD_3:
  return pbVar3;
}

