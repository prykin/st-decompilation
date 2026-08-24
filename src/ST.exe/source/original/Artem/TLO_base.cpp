#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_base.cpp

// 004B80D0 TLOBaseTy::SetState
#line 4 "decomp/ST.exe/functions/004B80D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_base.cpp
   TLOBaseTy::SetState

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_4=4;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_36=54;CASE_39=57;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115;CASE_FFFFFFFF=4294967295
    */

int __thiscall st::fn_004B80D0(TLOBaseTy *this,int param_1,int param_2)

{
  undefined4 *this_00;
  short sVar1;
  TLOBaseTy_field_046CState TVar2;
  TLOBaseTy_field_0245State TVar3;
  TLOBaseTyVTable *pTVar4;
  TLOBaseTy_field_05ACState TVar5;
  bool bVar7;
  TLOBaseTy *this_01;
  short sVar8;
  int iVar9;
  int iVar11;
  int local_EAX_497;
  int uVar10;
  int iVar12;
  int iVar10;
  short sVar13;
  int iVar14;
  InternalExceptionFrame local_50;
  TLOBaseTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar9 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_01 = local_c;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar10 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_base.cpp"),0xe1,0,iVar9,
                                st::mutable_c_string("TLOBaseTy::SetState error _state == %i"),param_1);
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar9,0,st::mutable_c_string("E:\\__titans\\Artem\\TLO_base.cpp"),0xe2);
    return iVar9;
  }
  /* ST_CALLSITE[004B8119]: CALL 0x00401311; direct=00401311 TLOBaseTy::sub_004B7F90 */
  if ((param_2 == 0) || (iVar11 = st::fn_00401311(local_c,param_1), iVar11 != 0)) {
    this_01->field_0249 = 0xffffffff;
    this_01->field_024D = this_01->field_0245;
    this_01->field_0245 = param_1;
    if (((param_1 == 0) || (param_1 == 5)) || (param_1 == 6)) {
      st::fn_00404926((int)this_01);
    }
    else {
      st::fn_00404B5B((AnonShape_004CC900_31EE9CAA *)this_01);
    }
    /* ST_CALLSITE[004B8241]: CALL 0x004022a7; direct=004022A7 TLOBaseTy::LoadImages */
    st::fn_004022A7(this_01);
    if (*(int *)(&DAT_00791a10 + this_01->field_0235 * 4) != 0) {
      /* ST_CALLSITE[004B8259]: CALL 0x00401a0f; direct=00401A0F TLOBaseTy::AddSprInit */
      st::fn_00401A0F(this_01);
    }
    if (param_2 != 0) {
      TVar3 = this_01->field_0245;
      if (TVar3 == CASE_1) {
        /* ST_CALLSITE[004B82C1]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_497 = st::fn_004049B7(*(char *)&this_01->field_023D);
        if (*(int *)(&DAT_007955d0 + ((uint)(byte)local_EAX_497 + this_01->field_0235 * 3) * 4) != 0
           ) {
          pTVar4 = this_01->vtable;
          /* ST_CALLSITE[004B82F3]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          uVar10 = st::fn_004049B7(*(char *)&this_01->field_023D);
          /* ST_CALLSITE[004B8317]: CALL dword ptr [EDI + 0x90] */
          (*pTVar4->vfunc_90)(this_01,3,
                              (short)*(undefined4 *)
                                      (&DAT_007955d0 +
                                      ((uint)(byte)uVar10 + this_01->field_0235 * 3) * 4));
        }
      }
      else if (TVar3 == CASE_2) {
        /* ST_CALLSITE[004B82AC]: CALL dword ptr [EDX + 0x90] */
        this_01->vfunc_90(3,(short)*(undefined4 *)(&DAT_007958ec + this_01->field_0235 * 4));
      }
      else if (TVar3 == CASE_3) {
        /* ST_CALLSITE[004B828D]: CALL dword ptr [EDX + 0x90] */
        this_01->vfunc_90(3,(short)*(undefined4 *)(&DAT_007959f4 + this_01->field_0235 * 4));
      }
    }
    switch(this_01->field_0245) {
    case CASE_0:
      if (*(int *)(&DAT_00792778 + this_01->field_0235 * 4) != 0) {
        this_01->field_0275 = 1;
        *(uint *)&this_01->field_0x2b5 = g_playSystem_00802A38->field_00E4;
        if (*(int *)&this_01->field_0x361 == 0) {
          this_01->field_0261 = 1;
        }
      }
      sVar8 = (short)this_01->field_05B0;
      sVar1 = (short)this_01->field_05B8;
      sVar13 = *(short *)&this_01->field_05B4;
      if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar13 < 0)) ||
          ((g_worldGrid.sizeY <= sVar13 || (sVar1 < 0)))) || (g_worldGrid.sizeZ <= sVar1)) {
        sVar8 = -1;
      }
      else {
        sVar8 = STGridAt3D(g_pathingGrid, sVar8, sVar13, sVar1);
      }
      if (sVar8 == 0) {
        local_8 = this_01->field_05B4;
        iVar11 = 2 - (uint)(*(int *)(&DAT_00791e30 + this_01->field_0235 * 4) != 1);
        if (local_8 < local_8 + iVar11) {
          do {
            iVar14 = this_01->field_05B0;
            if (iVar14 < iVar14 + iVar11) {
              do {
                iVar12 = st::fn_00404CCD((short)iVar14,(short)local_8,(short)this_01->field_05B8);
                if (iVar12 != 0) {
                  st::fn_006A5E40
                            (-5,g_overwriteContext_007ED77C,
                             st::mutable_c_string("E:\\__titans\\Artem\\TLO_base.cpp"),0x6a);
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < iVar11 + this_01->field_05B0);
            }
            local_8 = local_8 + 1;
          } while (local_8 < this_01->field_05B4 + iVar11);
        }
        this_01->field_0251 = 1;
      }
      break;
    case CASE_1:
      /* ST_CALLSITE[004B8561]: CALL dword ptr [EDX + 0x8] */
      iVar11 = this_01->vfunc_08();
      if (iVar11 != 0) {
        /* ST_CALLSITE[004B856E]: CALL dword ptr [EAX + 0xe8] */
        this_01->SetActivity(0);
      }
      sVar8 = (short)this_01->field_05B0;
      sVar1 = (short)this_01->field_05B8;
      sVar13 = *(short *)&this_01->field_05B4;
      if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
         (((sVar13 < 0 || ((g_worldGrid.sizeY <= sVar13 || (sVar1 < 0)))) ||
          (g_worldGrid.sizeZ <= sVar1)))) {
        sVar8 = -1;
      }
      else {
        sVar8 = STGridAt3D(g_pathingGrid, sVar8, sVar13, sVar1);
      }
      if (sVar8 != 0) {
        local_8 = this_01->field_05B4;
        iVar11 = 2 - (uint)(*(int *)(&DAT_00791e30 + this_01->field_0235 * 4) != 1);
        if (local_8 < local_8 + iVar11) {
          do {
            iVar14 = this_01->field_05B0;
            if (iVar14 < iVar14 + iVar11) {
              do {
                iVar12 = st::fn_0040232E((short)iVar14,(short)local_8,(short)this_01->field_05B8);
                if (iVar12 != 0) {
                  st::fn_006A5E40
                            (-5,g_overwriteContext_007ED77C,
                             st::mutable_c_string("E:\\__titans\\Artem\\TLO_base.cpp"),0x87);
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < iVar11 + this_01->field_05B0);
            }
            local_8 = local_8 + 1;
          } while (local_8 < this_01->field_05B4 + iVar11);
        }
        this_01->field_0251 = 0;
      }
      TVar5 = this_01->field_05AC;
      if (TVar5 - CASE_32 < 0x42) {
        switch(TVar5) {
        case CASE_32:
        case CASE_40:
        case CASE_49:
        case CASE_5C:
          st::fn_00404430((AnonShape_004CE720_8639BE44 *)this_01);
          break;
        case CASE_34:
        case CASE_5B:
          st::fn_00402239((int)this_01);
          break;
        case CASE_37:
        case CASE_6C:
          st::fn_00404219((AnonShape_004E8F90_6386CD4A *)this_01);
          break;
        case CASE_38:
        case CASE_39:
        case CASE_3B:
        case CASE_4F:
        case CASE_52:
        case CASE_5E:
        case CASE_5F:
        case CASE_60:
        case CASE_61:
          st::fn_004059E3((AnonShape_004E03E0_57EF73A1 *)this_01);
          break;
        case CASE_41:
          st::fn_0040192E();
          break;
        case CASE_48:
          st::fn_0040101E();
          break;
        case CASE_4C:
          st::fn_004053FD((int)this_01);
          break;
        case CASE_50:
          st::fn_00401FF0((int)this_01,
                             (uint)*(byte *)((int)&PTR_caseD_50_004b88dc + TVar5 + CASE_2));
          break;
        case CASE_53:
          st::fn_00403382((int)this_01);
          break;
        case CASE_54:
        case CASE_55:
        case CASE_56:
        case CASE_57:
        case CASE_58:
        case CASE_59:
        case CASE_5A:
          st::fn_0040476E((AnonShape_004CE670_5D83C685 *)this_01);
        case CASE_35:
          st::fn_00403567((int)this_01);
          break;
        case CASE_63:
          st::fn_004059A2();
          break;
        case CASE_64:
          st::fn_00404A1B();
          break;
        case CASE_68:
          st::fn_0040539E();
          break;
        case CASE_69:
          st::fn_004015B4((int)this_01);
          break;
        case CASE_6A:
          st::fn_0040350D((int)this_01);
          break;
        case CASE_6D:
          st::fn_00402DBA((int)this_01);
          break;
        case CASE_6E:
          st::fn_00401BD6((int)this_01);
          break;
        case CASE_6F:
        case CASE_73:
          st::fn_00401523((int *)this_01);
          break;
        case CASE_70:
          st::fn_00402883((int)this_01);
        }
      }
      if (*(int *)(&DAT_00794d94 + this_01->field_0235 * 4) != 0) {
        st::fn_004024B4((int)this_01);
      }
      st::fn_00401569((AnonShape_004E9C20_50FC91C6 *)this_01);
      /* ST_CALLSITE[004B877E]: CALL 0x00405425; direct=00405425 TLOBaseTy::sub_004DC150 */
      st::fn_00405425(this_01);
      this_00 = &this_01->field_01D5;
      /* ST_CALLSITE[004B878D]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      st::fn_00404264((STT3DSprC *)this_00,0xf);
      /* ST_CALLSITE[004B8796]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      st::fn_00404264((STT3DSprC *)this_00,0);
      /* ST_CALLSITE[004B879F]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      st::fn_00404264((STT3DSprC *)this_00,1);
    default:
      if (*(int *)(&DAT_00792778 + this_01->field_0235 * 4) != 0) {
        this_01->field_0275 = 0;
        this_01->field_0261 = 0;
      }
      break;
    case CASE_4:
      sVar8 = (short)this_01->field_05B0;
      sVar1 = (short)this_01->field_05B8;
      sVar13 = *(short *)&this_01->field_05B4;
      if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
         ((sVar13 < 0 ||
          (((g_worldGrid.sizeY <= sVar13 || (sVar1 < 0)) || (g_worldGrid.sizeZ <= sVar1)))))) {
        sVar13 = -1;
      }
      else {
        sVar13 = STGridAt3D(g_pathingGrid, sVar8, sVar13, sVar1);
      }
      if (sVar13 != 0) {
        iVar11 = st::fn_0040232E(sVar8,*(short *)&this_01->field_05B4,sVar1);
        if (iVar11 != 0) {
          st::fn_006A5E40
                    (-5,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_base.cpp"),0x73);
        }
        this_01->field_0251 = 0;
      }
      if (*(int *)(&DAT_00792778 + this_01->field_0235 * 4) != 0) {
        this_01->field_0275 = 0;
        this_01->field_0261 = 0;
      }
      break;
    case CASE_6:
      this_01->field_0458 = 0xfe;
    }
    switch(this_01->field_05AC) {
    case CASE_36:
    case CASE_3D:
    case CASE_5D:
      st::fn_00402DA6((STMineSetC *)this_01);
      break;
    case CASE_45:
      st::fn_00404651((AnonShape_004D9BD0_B3B50583 *)this_01);
      break;
    case CASE_4E:
      st::fn_00401663((AnonShape_004D9BD0_B3B50583 *)this_01);
      break;
    case CASE_68:
      st::fn_0040540C((AnonShape_004DC470_71C75079 *)this_01);
      break;
    case CASE_6A:
      st::fn_00401195((int *)this_01);
      break;
    case CASE_70:
      st::fn_0040357B((AnonShape_004D8DB0_597A2A4F *)this_01);
      break;
    case CASE_72:
      st::fn_00401F46((AnonShape_004D9BD0_B3B50583 *)this_01);
    }
    if (*(int *)(&DAT_00794d94 + this_01->field_0235 * 4) != 0) {
      st::fn_004029A0((int)this_01);
    }
    st::fn_00402E23((int)this_01);
    /* ST_CALLSITE[004B883E]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
    st::fn_00402CF7(this_01,1);
  }
  else {
    TVar2 = this_01->field_046C;
    if ((TVar2 == 0) || ((TVar2 == CASE_1 || (TVar2 == CASE_2)))) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      if (((this_01->field_0245 == CASE_5) && (param_1 == 2)) &&
         /* ST_CALLSITE[004B815E]: CALL 0x00401311; direct=00401311 TLOBaseTy::sub_004B7F90 */
         (iVar11 = st::fn_00401311(this_01,0), iVar11 != 0)) {
        /* ST_CALLSITE[004B816C]: CALL 0x004010aa; direct=004010AA TLOBaseTy::SetState */
        st::fn_004010AA(this_01,0,1);
      }
      TVar3 = this_01->field_0245;
      if ((TVar3 == CASE_4) && (param_1 == 3)) {
        this_01->field_0249 = 0xffffffff;
      }
      else {
        this_01->field_0249 = param_1;
      }
      if (((this_01->field_0255 != 0) && (TVar3 == CASE_0)) &&
         ((this_01->field_0249 == 2 && (*(int *)(&DAT_00792778 + this_01->field_0235 * 4) != 0)))) {
        this_01->field_0275 = 0;
      }
      if (((TVar3 == CASE_4) && (this_01->field_03DC != 0)) &&
         /* ST_CALLSITE[004B81D4]: CALL 0x00404e9e; direct=00404E9E TLOBaseTy::sub_004EA620 */
         (iVar11 = st::fn_00404E9E(this_01), iVar11 != 0)) {
        this_01->field_03FC = 1;
        this_01->field_0400 = 0;
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

// 004B9FA0 TLOBaseTy::GetMessage
#line 4 "decomp/ST.exe/functions/004B9FA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_base.cpp
   TLOBaseTy::GetMessage

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401640|004B9FA0; family_names=TLOBaseTy::GetMessage; ret4=72;
   direct_offsets={10:12,14:13,18:5,1c:10}

   [STSwitchEnumApplier] Switch target field_0231 uses
   /SubmarineTitans/Recovered/Enums/STSprGameObjC_field_0231State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_44=68;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_0231 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0231State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_44=68;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190
    */

int __thiscall st::fn_004B9FA0(TLOBaseTy *this,STMessage *message)

{
  undefined4 * st_unresolved_puRam00000000{};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  STMessageId SVar5;
  int iVar6;
  TLOBaseTy_field_05ACState TVar7;
  TLOBaseTy_field_04D0State TVar8;
  TLOBaseTy_field_0245State TVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  TLOBaseTy *this_00;
  short sVar15;
  int local_EAX_47;
  int local_EAX_394;
  int local_EAX_833;
  undefined *puVar17;
  int iVar26_mg15;
  int local_EAX_1723;
  int local_EAX_1838;
  int local_EAX_1886;
  int local_EAX_1961;
  AnonPointee_TLOBaseTy_0607 *pAVar18;
  int uVar18;
  STT3DSprC *pSVar19;
  int local_EAX_2922;
  int local_EAX_2934;
  int local_EAX_3194;
  int local_EAX_3206;
  int iVar17;
  HoloTy *pHVar20;
  dword dVar21;
  int iVar22;
  uint uVar23;
  AnonShape_004B9FA0_0EE05DAC *pAVar24;
  int local_EAX_5336;
  int local_EAX_5569;
  int local_EAX_7611;
  int local_EAX_8051;
  int local_EAX_8211;
  TLOBaseTyVTable *pTVar25;
  int local_EAX_8295;
  int local_EAX_8505;
  int uVar29;
  short sVar16;
  int local_EAX_11034;
  int iVar26_mg26;
  int iVar39;
  int iVar26;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX;
  uint uVar27;
  uint uVar28;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  STWorldObject *pSVar29;
  TLOBaseTy_field_05ACState *pTVar30;
  byte *puVar31;
  int *piVar32;
  TLOBaseTy_field_0231State *pTVar33;
  byte **ppbVar34;
  byte *pbVar35;
  TLOBaseTy_field_05ACState *pTVar36;
  byte *puVar37;
  int iVar38;
  int *piVar39;
  TLOBaseTy_field_0231State *pTVar40;
  byte *pbVar41;
  bool bVar42;
  char cVar43;
  undefined2 arg_2;
  int aiStack_6dc [17];
  undefined4 auStack_698 [17];
  undefined4 auStack_654 [17];
  undefined4 auStack_610 [17];
  int aiStack_5cc [17];
  undefined4 auStack_588 [17];
  int aiStack_544 [17];
  int aiStack_500 [17];
  byte *local_4bc [5];
  undefined4 local_4a8;
  undefined4 local_465;
  int local_ea;
  uint local_e6;
  int local_e2;
  uint local_de;
  int local_da;
  uint local_d6;
  int local_d2;
  uint local_ce;
  int local_ca;
  InternalExceptionFrame local_c4;
  TLOBaseTy *local_80;
  STMessage local_7c;
  int local_5c [2];
  int local_54;
  word local_50;
  int local_44;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  undefined4 *local_34;
  uint local_30;
  int local_2c;
  ushort *local_28;
  ushort *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  AnonShape_0060EA30_DCEB68AD *local_18;
  int local_14;
  byte *local_10;
  AnonShape_004B9FA0_0EE05DAC *local_c;
  byte *local_8;

  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  local_80 = this;
  local_EAX_47 = st::fn_0072D7F0(local_c4.jumpBuffer,0);
  this_00 = local_80;
  if (local_EAX_47 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar39 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_base.cpp"),0x6d9,0,local_EAX_47,
                                st::mutable_c_string("TLOBaseTy::GetMessage error mess->id == %i"),message->id);
    if (iVar39 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_47,0,st::mutable_c_string("E:\\__titans\\Artem\\TLO_base.cpp"),0x6da);
    return local_EAX_47;
  }
  /* ST_CALLSITE[004B9FEA]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  st::fn_00404F07((STSprGameObjC *)local_80,message);
  SVar5 = message->id;
  if (SVar5 < MESS_STOCTOPUSC_0112) {
    if (SVar5 == MESS_ID_ALLCREATE) {
      TVar7 = this_00->field_05AC;
      if (TVar7 - CASE_37 < 0x38) {
        switch(TVar7) {
        case CASE_37:
        case CASE_6C:
          st::fn_00405281((AnonShape_004E8D40_DAF7916C *)this_00);
          break;
        case CASE_38:
        case CASE_39:
        case CASE_4F:
        case CASE_5E:
        case CASE_61:
          st::fn_00405D21((AnonShape_004E0250_5A3B9236 *)this_00);
          break;
        case CASE_53:
          st::fn_00402C93((AnonShape_004CD790_161F55D2 *)this_00);
          break;
        case CASE_54:
        case CASE_55:
        case CASE_56:
        case CASE_57:
        case CASE_58:
        case CASE_59:
        case CASE_5A:
          st::fn_004024DC(this_00);
          break;
        case CASE_69:
          st::fn_00404921((AnonShape_004DCCF0_FF75E3FE *)this_00);
          break;
        case CASE_6A:
          st::fn_00404467((AnonShape_004C5F30_84FC19DC *)this_00);
          break;
        case CASE_6E:
          st::fn_004026DF((AnonShape_004DD500_8D93FB74 *)this_00,(uint)(&BYTE_004bd2b1)[TVar7]);
        }
      }
      if (*(int *)(&DAT_00794d94 + this_00->field_0235 * 4) == 0) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      st::fn_00404FCF((AnonShape_004C2C10_59B6D93C *)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (SVar5 < MESS_STSPRGAMEOBJC_0109) {
      if (SVar5 == MESS_SHARED_0108) {
        iVar38 = 0;
        iVar26 = 0;
        do {
          piVar32 = (int *)(&this_00->field_01F5->field_0x0 + iVar26);
          auStack_588[iVar38] = *(undefined4 *)(&this_00->field_01F5->field_0x1c + iVar26);
          aiStack_6dc[iVar38] = piVar32[8];
          if (*piVar32 != 0) {
            cVar43 = (char)iVar38;
            iVar22 = st::fn_004042AF(&this_00->field_01D5,cVar43);
            aiStack_500[iVar38] = iVar22;
            iVar22 = st::fn_004042AF(&this_00->field_01D5,cVar43);
            uVar23 = st::fn_00405A29(&this_00->field_01D5,cVar43,iVar22);
            auStack_698[iVar38] = uVar23;
          }
          iVar26 = iVar26 + 0x24;
          iVar38 = iVar38 + 1;
        } while (iVar26 < 0x264);
        if (this_00->field_05FF != nullptr) {
          iVar38 = 0;
          iVar26 = 0;
          do {
            pHVar20 = this_00->field_05FF;
            iVar22 = *(int *)&pHVar20->field_0x20;
            piVar32 = (int *)(iVar22 + iVar26);
            auStack_610[iVar38] = *(undefined4 *)(iVar22 + 0x1c + iVar26);
            aiStack_544[iVar38] = piVar32[8];
            if (*piVar32 != 0) {
              cVar43 = (char)iVar38;
              iVar22 = st::fn_004042AF(pHVar20,cVar43);
              pHVar20 = this_00->field_05FF;
              aiStack_5cc[iVar38] = iVar22;
              iVar22 = st::fn_004042AF(pHVar20,cVar43);
              uVar23 = st::fn_00405A29(this_00->field_05FF,cVar43,iVar22);
              auStack_654[iVar38] = uVar23;
            }
            iVar26 = iVar26 + 0x24;
            iVar38 = iVar38 + 1;
          } while (iVar26 < 0x264);
        }
        /* ST_CALLSITE[004BB200]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
        st::fn_00402CF7(this_00,1);
        iVar38 = 0;
        iVar26 = 0;
        do {
          *(undefined4 *)(&this_00->field_01F5->field_0x1c + iVar26) = auStack_588[iVar38];
          *(int *)(&this_00->field_01F5->field_0x20 + iVar26) = aiStack_6dc[iVar38];
          piVar32 = (int *)(&this_00->field_01F5->field_0x0 + iVar26);
          iVar22 = *piVar32;
          if (iVar22 != 0) {
            *(undefined4 *)(piVar32[1] + aiStack_500[iVar38] * 4) =
                 *(undefined4 *)(aiStack_500[iVar38] * 4 + 0x31 + iVar22);
            uVar23 = auStack_698[iVar38];
            iVar22 = st::fn_004042AF(&this_00->field_01D5,(char)iVar38);
            st::fn_00405141(&this_00->field_01D5,(char)iVar38,iVar22,uVar23);
          }
          iVar26 = iVar26 + 0x24;
          iVar38 = iVar38 + 1;
        } while (iVar26 < 0x264);
        if (this_00->field_05FF == nullptr) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        iVar38 = 0;
        iVar26 = 0;
        do {
          *(undefined4 *)(*(int *)&this_00->field_05FF->field_0x20 + 0x1c + iVar26) =
               auStack_610[iVar38];
          *(int *)(*(int *)&this_00->field_05FF->field_0x20 + 0x20 + iVar26) = aiStack_544[iVar38];
          iVar22 = *(int *)&this_00->field_05FF->field_0x20;
          iVar6 = *(int *)(iVar22 + iVar26);
          if (iVar6 != 0) {
            *(undefined4 *)(*(int *)(iVar22 + iVar26 + 4) + aiStack_5cc[iVar38] * 4) =
                 *(undefined4 *)(aiStack_5cc[iVar38] * 4 + 0x31 + iVar6);
            uVar23 = auStack_654[iVar38];
            iVar22 = st::fn_004042AF(this_00->field_05FF,(char)iVar38);
            st::fn_00405141(this_00->field_05FF,(char)iVar38,iVar22,uVar23);
          }
          iVar26 = iVar26 + 0x24;
          iVar38 = iVar38 + 1;
        } while (iVar26 < 0x264);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (SVar5 == MESS_ID_NONE) {
        if (this_00->field_04B4 != 0) {
          if ((this_00->field_0245 == CASE_0) && (*(int *)&this_00->field_0x361 == 0)) {
            bVar42 = true;
          }
          else {
            bVar42 = false;
          }
          if ((bVar42) && (this_00->field_0249 != 6)) {
            uVar28 = g_playSystem_00802A38->field_00E4;
            this_00->field_04BC = 1;
            this_00->field_04B8 = uVar28;
            /* ST_CALLSITE[004BAE15]: CALL dword ptr [EDX + 0x90] */
            this_00->vfunc_90(3,0x360);
            /* ST_CALLSITE[004BAE21]: CALL 0x004010aa; direct=004010AA TLOBaseTy::SetState */
            st::fn_004010AA(this_00,6,1);
            /* ST_CALLSITE[004BAE2A]: CALL 0x004028f1; direct=004028F1 TLOBaseTy::sub_004CC880 */
            st::fn_004028F1(this_00,4);
          }
        }
        st::fn_004040D4((AnonShape_004CBAD0_DCDD6BA9 *)this_00);
        st::fn_004048EF(this_00);
        if (this_00->field_05FF != nullptr) {
          st::fn_00402F31(this_00);
        }
        if (this_00->field_0245 == CASE_0) {
          if (this_00->field_0261 != 0) {
            /* ST_CALLSITE[004BAE62]: CALL 0x004010a0; direct=004010A0 TLOBaseTy::fireProc */
            st::fn_004010A0(this_00);
          }
          st::fn_00405A6A(this_00);
          switch(this_00->field_05AC) {
          case CASE_32:
          case CASE_40:
          case CASE_49:
          case CASE_5C:
            st::fn_0040475F();
            break;
          case CASE_33:
            st::fn_00403CBA(this_00);
            break;
          case CASE_34:
          case CASE_5B:
            st::fn_004055E2((int *)this_00);
            break;
          case CASE_36:
          case CASE_5D:
            st::fn_00402D9C((AnonShape_004E4B10_C52B4B94 *)this_00);
            break;
          case CASE_37:
          case CASE_6C:
            st::fn_00401753(this_00);
            break;
          case CASE_38:
          case CASE_39:
          case CASE_3B:
          case CASE_4F:
          case CASE_52:
          case CASE_5E:
          case CASE_5F:
          case CASE_60:
          case CASE_61:
            st::fn_004050AB(this_00);
            break;
          case CASE_3A:
            st::fn_0040240F((int *)this_00);
            break;
          case CASE_41:
            st::fn_00403C06((int *)this_00);
            break;
          case CASE_43:
            st::fn_00404E76(this_00);
            break;
          case CASE_45:
            st::fn_00405B5F(this_00);
            break;
          case CASE_48:
            st::fn_00404408((AnonShape_004DFB00_599AF150 *)this_00);
            break;
          case CASE_4C:
            st::fn_00403B7F(this_00);
            break;
          case CASE_4D:
            st::fn_00402252(this_00);
            break;
          case CASE_4E:
            st::fn_00401C4E();
            break;
          case CASE_63:
            st::fn_0040404D(this_00);
            break;
          case CASE_64:
            st::fn_004016AE((int *)this_00);
            break;
          case CASE_68:
            st::fn_00404E80(this_00);
            break;
          case CASE_69:
            st::fn_004025DB((AnonShape_004DCBF0_C6A0E7DA *)this_00);
            break;
          case CASE_6A:
            st::fn_00401C85((AnonShape_004C5EB0_4D7D61A8 *)this_00);
            break;
          case CASE_6E:
            st::fn_00402699(this_00);
            break;
          case CASE_6F:
          case CASE_73:
            st::fn_00403AB7((AnonShape_004ECC70_4D35D723 *)this_00);
            break;
          case CASE_70:
            st::fn_004049AD((AnonShape_004D8F80_1255A4D6 *)this_00);
            break;
          case CASE_72:
            st::fn_00401E5B();
          }
        }
        if (this_00->field_03DC != 0) {
          st::fn_00404AD4((STJellyGunC *)this_00);
        }
        /* ST_CALLSITE[004BAF85]: CALL 0x00405830; direct=00405830 TLOBaseTy::teleNone */
        st::fn_00405830(this_00);
        if ((this_00->field_0410 != 0) &&
           (this_00->field_041C + this_00->field_0418 <= g_playSystem_00802A38->field_00E4)) {
          this_00->field_0410 = 0;
        }
        if ((this_00->field_0420 != 0) &&
           (this_00->field_0428 + this_00->field_0424 <= g_playSystem_00802A38->field_00E4)) {
          this_00->field_0420 = 0;
        }
        if (this_00->field_04A0 != 0) {
          /* ST_CALLSITE[004BAFEB]: CALL dword ptr [EAX + 0x7c] */
          iVar26 = this_00->vfunc_7C();
          if (iVar26 < 100) {
            if (this_00->field_04A4 + 0x7d <= g_playSystem_00802A38->field_00E4) {
              st::fn_00402B8A(this_00,(-(uint)(this_00->field_04A8 != 0) & 5) + 5,
                                 (ushort)this_00->field_04AC,0xffff);
              this_00->field_04A4 = g_playSystem_00802A38->field_00E4;
            }
          }
          else {
            this_00->field_04A0 = 0;
          }
        }
        st::fn_004011EF((AnonShape_004CC370_02CE3D17 *)this_00);
        if (this_00->field_04C0 == 0) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        pHVar20 = this_00->field_061F;
        if (pHVar20 == nullptr) {
          pHVar20 = (HoloTy *)st::fn_00403BED();
          this_00->field_061F = pHVar20;
          /* ST_CALLSITE[004BB074]: CALL dword ptr [EDX + 0x2c] */
          dVar21 = this_00->slot_2C();
          st::fn_00403819(this_00->field_061F,CASE_2,dVar21);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (this_00->field_002C == 0) {
          st::fn_0040435E(pHVar20,(int)this_00->field_0041,(int)this_00->field_0043,
                             st::machine_word_boundary_cast<int>(this_00->field_0045 + 0x14),(int)this_00->field_006C,100);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        st::fn_0040435E(pHVar20,(this_00->field_05B0 + 1) * 0xc9,(this_00->field_05B4 + 1) * 0xc9
                           ,st::machine_word_boundary_cast<int>(this_00->field_05B8 * 200 + 0x78),(int)this_00->field_006C,100);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (SVar5 == MESS_ID_CREATE) {
        dVar21 = (message->arg0).u32;
        if (this_00 == nullptr) {
          pTVar36 = nullptr;
        }
        else {
          pTVar36 = &this_00->field_05AC;
        }
        pTVar30 = (TLOBaseTy_field_05ACState *)(dVar21 + 0x14);
        memmove(pTVar36, pTVar30, 0x43); /* compiler REP MOVS byte copy */
        this_00->field_0231 = *(TLOBaseTy_field_0231State *)(dVar21 + 0xc);
        this_00->field_0235 = st::machine_word_boundary_cast<undefined4>(this_00->field_05AC - CASE_32);
        /* ST_CALLSITE[004BA12A]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_394 = st::fn_004049B7(*(char *)&this_00->field_0024);
        local_EAX_394 = (int)(byte)local_EAX_394;
        this_00->field_0239 = local_EAX_394 + -1;
        this_00->field_023D = st::machine_word_boundary_cast<undefined4>(this_00->field_0024);
        if (*(int *)(&DAT_00791f38 + this_00->field_0235 * 4) == 2) {
          this_00->field_05FB = st::machine_word_boundary_cast<undefined4>(&DAT_007aca60);
        }
        else if (*(int *)(&DAT_00791f38 + this_00->field_0235 * 4) == 1) {
          this_00->field_05FB = st::machine_word_boundary_cast<undefined4>(&DAT_007ace00);
        }
        else {
          this_00->field_05FB = st::machine_word_boundary_cast<undefined4>(&DAT_007ac988);
        }
        this_00->field_04B4 = 0;
        this_00->field_04B0 = 0;
        this_00->field_0255 = *(undefined4 *)(&DAT_007914e8 + this_00->field_0235 * 4);
        this_00->field_0454 = 0;
        this_00->field_0458 = 0xff;
        if (this_00->field_002C == 0) {
          this_00->field_060B = 0xb4;
          this_00->field_060F = 0x8c;
          this_00->field_0613 = 0x5a;
          this_00->field_0617 = 0x45;
        }
        else if (this_00->field_002C == 1) {
          this_00->field_060B = 0xf0;
          this_00->field_060F = 0xbe;
          this_00->field_0613 = 0x78;
          this_00->field_0617 = 0x56;
        }
        else {
          this_00->field_0617 = 0xffffffff;
          this_00->field_0613 = 0xffffffff;
          this_00->field_060F = 0xffffffff;
          this_00->field_060B = 0xffffffff;
        }
        st::fn_00402B5D(this_00,0);
        iVar26 = st::fn_0040295F(this_00,(short)this_00->field_05B0,
                                    *(short *)&this_00->field_05B4,(short)this_00->field_05B8,1);
        if (iVar26 != 0) {
          st::fn_006A5E40
                    (-5,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_base.cpp"),0x290);
        }
        st::fn_0040278E(this_00,(short)this_00->field_05B0,*(short *)&this_00->field_05B4,
                           (short)this_00->field_05B8);
        st::fn_00402A36((AnonShape_004B9920_1D6BF5BA *)this_00);
        switch(this_00->field_0231) {
        case CASE_0:
        case CASE_1:
        case CASE_3:
          if ((100 < this_00->field_05DB) || (this_00->field_05DB < 0)) {
            this_00->field_05DB = 100;
          }
          if ((100 < this_00->field_05D7) || (this_00->field_05D7 < 0)) {
            this_00->field_05D7 = 100;
          }
          /* ST_CALLSITE[004BA2E1]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          local_EAX_833 = st::fn_004049B7(*(char *)&this_00->field_023D);
          this_00->field_0241 =
               (*(int *)(&DAT_007e4178 + ((uint)(byte)local_EAX_833 + this_00->field_0235 * 3) * 4)
               * this_00->field_05D7) / 100;
          this_00->field_0410 = 0;
          this_00->field_042C = 0;
          this_00->field_04A0 = 0;
          this_00->field_04C0 = 0;
          TVar7 = this_00->field_05AC;
          if ((((TVar7 != CASE_4D) || (this_00->field_04D0 == CASE_2)) &&
              ((TVar7 != CASE_4C || (this_00->field_04D0 == CASE_2)))) &&
             ((TVar7 != CASE_43 || (this_00->field_04D0 == CASE_2)))) {
            /* ST_CALLSITE[004BA36C]: CALL dword ptr [EDX + 0x2c] */
            dVar21 = this_00->slot_2C();
            st::fn_00405E39(STReplaceLowByte((uint32_t)(dVar21), (uint8_t)(*(undefined1 *)&this_00->field_0024)),
                               dVar21);
          }
          this_00->field_0259 = 0;
          st::fn_00401929((AnonShape_004C3020_45D93566 *)this_00);
          st::fn_00401E56((AnonShape_004C71F0_9DDD72E5 *)this_00);
          st::fn_00403E40(this_00);
          st::fn_00401B4F((AnonShape_004CC220_7DEF08C7 *)this_00);
          st::fn_004012DF((int)this_00);
          st::fn_00405E34((int)this_00);
          switch(this_00->field_05AC) {
          case CASE_32:
          case CASE_40:
          case CASE_49:
          case CASE_5C:
            st::fn_00401DF7((int)this_00);
            break;
          case CASE_33:
            st::fn_0040320B((int)this_00);
            break;
          case CASE_34:
          case CASE_5B:
            st::fn_00401668((int)this_00);
            break;
          case CASE_36:
          case CASE_3D:
          case CASE_5D:
            st::fn_00402504((int *)this_00);
            break;
          case CASE_37:
          case CASE_6C:
            st::fn_0040190B((AnonShape_004E8DC0_1D60A929 *)this_00);
            break;
          case CASE_38:
          case CASE_39:
          case CASE_3B:
          case CASE_4F:
          case CASE_52:
          case CASE_5E:
          case CASE_5F:
          case CASE_60:
          case CASE_61:
            st::fn_0040487C((AnonShape_004E0040_648F9827 *)this_00);
            break;
          case CASE_3A:
            st::fn_0040315C((AnonShape_004D9790_FC54D6B0 *)this_00);
            break;
          case CASE_41:
            st::fn_00401154((AnonShape_004E3880_642C8E1A *)this_00);
            break;
          case CASE_43:
            st::fn_00401A87((AnonShape_004DC660_217FA9F0 *)this_00);
            break;
          case CASE_44:
            st::fn_00404FBB((int)this_00);
            break;
          case CASE_45:
            st::fn_0040180C((AnonShape_004EA7A0_0F37AD2F *)this_00);
            break;
          case CASE_48:
            st::fn_004013DE((int)this_00);
            break;
          case CASE_4C:
            st::fn_00403256((AnonShape_004DC660_217FA9F0 *)this_00);
            break;
          case CASE_4D:
            st::fn_00403689((int)this_00);
            break;
          case CASE_4E:
            st::fn_004029D2((int)this_00);
            break;
          case CASE_50:
            st::fn_0040358A((int)this_00);
            break;
          case CASE_53:
            st::fn_004052DB((AnonShape_004CD6B0_318BEA19 *)this_00);
            break;
          case CASE_54:
          case CASE_55:
          case CASE_56:
          case CASE_57:
          case CASE_58:
          case CASE_59:
          case CASE_5A:
            st::fn_0040375B(this_00);
          case CASE_35:
            st::fn_0040154B((int)this_00);
            break;
          case CASE_63:
            st::fn_00402EB9((int)this_00);
            break;
          case CASE_64:
            st::fn_004019A1((AnonShape_004E4630_7FABCC3F *)this_00);
            break;
          case CASE_68:
            st::fn_00402437((AnonShape_004DC1E0_5260A589 *)this_00);
            break;
          case CASE_69:
            st::fn_0040449E((AnonShape_004DCB70_1032D92F *)this_00);
            break;
          case CASE_6A:
            st::fn_004035B7((AnonShape_004C5DE0_7F596C47 *)this_00);
            break;
          case CASE_6D:
            st::fn_00402A40((AnonShape_004DBA20_8FF87D0F *)this_00);
            break;
          case CASE_6E:
            st::fn_00403A03((AnonShape_004DD460_CCB31E51 *)this_00);
            break;
          case CASE_6F:
          case CASE_73:
            st::fn_004027F2((AnonShape_004ECC70_4D35D723 *)this_00);
            break;
          case CASE_70:
            st::fn_00401361((AnonShape_004D8D00_A9D3F7D4 *)this_00);
            break;
          case CASE_72:
            st::fn_00403F62((int)this_00);
          }
          if (-1 < this_00->field_05BC) {
            this_00->field_0030 = (short)this_00->field_05BC;
          }
          /* ST_CALLSITE[004BA519]: CALL 0x00404bc9; direct=00404BC9 TLOEmbryoTy::sub_00419C70 */
          st::fn_00404BC9
                    ((int *)this_00,this_00->field_0231,(uint)(this_00->field_0231 == CASE_0));
          if (*(int *)(&DAT_00794d94 + this_00->field_0235 * 4) != 0) {
            st::fn_00403D87((AnonShape_004C2DD0_4C038B03 *)this_00);
          }
          /* ST_CALLSITE[004BA539]: CALL 0x004010aa; direct=004010AA TLOBaseTy::SetState */
          st::fn_004010AA(this_00,0,1);
          if (this_00->field_0245 == CASE_0) {
            iVar26 = this_00->field_01F5->field_020C;
            iVar38 = this_00->field_01F5->field_0208;
            if (iVar38 < iVar26) {
              uVar28 = st::machine_word_boundary_cast<uint>(this_00->field_001C * 0x41c64e6d + 0x3039);
              this_00->field_001C = uVar28;
              uVar28 = (uVar28 >> 0x10) % ((iVar26 - iVar38) + 1U) + iVar38;
              /* ST_CALLSITE[004BA587]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
              st::fn_00401064((STT3DSprC *)&this_00->field_01D5,'\x0e',uVar28);
              /* ST_CALLSITE[004BA591]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
              st::fn_00401064((STT3DSprC *)&this_00->field_01D5,'\r',uVar28);
            }
          }
          if ((*(int *)(&DAT_00792778 + this_00->field_0235 * 4) == 0) ||
             (iVar26 = st::fn_00405C45((int)this_00->field_0024,this_00->field_0235,0),
             iVar26 == 0)) {
            puVar17 = (undefined *)0x5;
          }
          else {
            puVar17 = (undefined *)
                      st::fn_00405C45((int)this_00->field_0024,this_00->field_0235,0);
          }
          /* ST_CALLSITE[004BA5D4]: CALL 0x004023a1; direct=004023A1 TLOEmbryoTy::sub_0041C3F0 */
          st::fn_004023A1((TLOEmbryoTy *)this_00,puVar17);
          if ((this_00->field_0231 == CASE_1) &&
             (local_14 = 0, g_aiBossClass_008117BC != nullptr)) {
            local_7c.arg1.words.low = *(undefined2 *)&this_00->field_0024;
            local_7c.arg0.words.high = this_00->field_0032;
            local_7c.arg0.words.low = local_7c.arg1.words.low;
            local_7c.id = MESS_AIBOSSCLASSTY_5DD0;
            iVar26_mg15 = st::fn_006E62D0
                                    (g_playSystem_00802A38,
                                     (AnonShape_005EFAE0_B406B78B *)this_00->field_05D3,&local_14);
            if ((iVar26_mg15 == 0) && (local_14 != 0)) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_7c.arg1.words.high = *(word *)(local_14 + 0x32);
            }
            else {
              local_7c.arg1.words.high = 0xffff;
            }
            /* ST_CALLSITE[004BA64C]: CALL dword ptr [EDX] */
            g_aiBossClass_008117BC->GetMessage(&local_7c);
          }
          /* ST_CALLSITE[004BA65B]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          local_EAX_1723 = st::fn_004049B7(*(char *)&this_00->field_023D);
          if (this_00->field_0241 !=
              *(int *)(&DAT_007e4178 + ((uint)(byte)local_EAX_1723 + this_00->field_0235 * 3) * 4))
          {
            st::fn_00403BCF((int *)this_00);
          }
          if (this_00->field_0024 == (byte *)(uint)(byte)this_00->field_0010->field_112D) {
            st::fn_00404B8D((char)this_00->field_0024);
          }
          if (((this_00->field_0231 == CASE_1) &&
              (this_00->field_0024 == (byte *)(uint)(byte)this_00->field_0010->field_112D)) &&
             /* ST_CALLSITE[004BA6CE]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
             (local_EAX_1838 = st::fn_004049B7(*(char *)&this_00->field_023D),
             *(int *)(&DAT_007952b8 + ((uint)(byte)local_EAX_1838 + this_00->field_0235 * 3) * 4) !=
             0)) {
            pTVar25 = this_00->vtable;
            /* ST_CALLSITE[004BA6FE]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
            local_EAX_1886 = st::fn_004049B7(*(char *)&this_00->field_023D);
            /* ST_CALLSITE[004BA722]: CALL dword ptr [EDI + 0x90] */
            (*pTVar25->vfunc_90)
                      (this_00,4,
                       (short)*(undefined4 *)
                               (&DAT_007952b8 +
                               ((uint)(byte)local_EAX_1886 + this_00->field_0235 * 3) * 4));
          }
          if (((this_00->field_0231 == CASE_0) || (this_00->field_0231 == CASE_3)) &&
             (g_manBasis_00811784 != nullptr)) {
            /* ST_CALLSITE[004BA749]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
            local_EAX_1961 = st::fn_004049B7(*(char *)&this_00->field_0024);
            local_EAX_1961 = (int)(byte)local_EAX_1961;
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            st::fn_00403265(g_manBasis_00811784,this_00->field_05B0,this_00->field_05B4,
                               this_00->field_05B8,
                               STReplaceLowByte((uint32_t)(extraout_ECX), (uint8_t)(*(undefined1 *)&this_00->field_002C)),this_00->field_05AC,
                               local_EAX_1961);
          }
          if (this_00->field_05DF != 0) {
            puVar31 = (byte *)(&this_00->field_01D5);
            this_00->field_04C8 = st::machine_word_boundary_cast<int>(PTR_00806724->entryCount + -1);
            this_00->field_04CC = g_playSystem_00802A38->field_00E4;
            /* ST_CALLSITE[004BA7B8]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
            st::fn_00401BAE((STT3DSprC *)puVar31,'\x0e');
            /* ST_CALLSITE[004BA7C1]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
            st::fn_00401BAE((STT3DSprC *)puVar31,'\r');
            /* ST_CALLSITE[004BA7CA]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
            st::fn_00401BAE((STT3DSprC *)puVar31,'\f');
            /* ST_CALLSITE[004BA7D3]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
            st::fn_00401BAE((STT3DSprC *)puVar31,'\v');
            /* ST_CALLSITE[004BA7DC]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
            st::fn_00401BAE((STT3DSprC *)puVar31,'\t');
            /* ST_CALLSITE[004BA7E5]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
            st::fn_00401BAE((STT3DSprC *)puVar31,'\b');
            /* ST_CALLSITE[004BA7EE]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
            st::fn_00401BAE((STT3DSprC *)puVar31,'\a');
            /* ST_CALLSITE[004BA80A]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
            st::fn_0040116D
                      ((STT3DSprC *)puVar31,PTR_00806724->entries[this_00->field_04C8],
                       (int)PTR_00806724->field_002C);
            st::fn_00401997((AnonShape_0041F630_B1BEE81C *)this_00);
            /* ST_CALLSITE[004BA818]: CALL 0x0040197e; direct=0040197E TLOBaseTy::sub_004CBA30 */
            st::fn_0040197E(this_00);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          break;
        case CASE_2:
          local_c = static_cast<AnonShape_004B9FA0_0EE05DAC *>((message->arg0).ptr);
          puVar31 = (byte *)&local_c->field_0x57;
          puVar37 = (byte *)
                    (-(uint)(this_00 != nullptr) & (uint)&this_00->field_0231);
          memmove(puVar37, puVar31, 0x37b); /* compiler REP MOVS byte copy */
          this_00->field_0231 = CASE_2;
          if (this_00->field_03D8 != 0) {
            pAVar18 = static_cast<AnonPointee_TLOBaseTy_0607 *>(st::fn_006AAC70(st::machine_word_boundary_cast<uint>(this_00->field_03D8 * 0x27)));
            this_00->field_0607 = pAVar18;
          }
          if (this_00->field_03D4 != 0) {
            uVar27 = st::machine_word_boundary_cast<uint>(this_00->field_03D4 * 0x27);
            puVar31 = (byte *)(&local_c->field_0x0 + local_c->field_03D2);
            pAVar18 = this_00->field_0607;
            for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
              pAVar18->field_0000 = *puVar31;
              puVar31 = (byte *)(puVar31 + 1);
              pAVar18 = (AnonPointee_TLOBaseTy_0607 *)&pAVar18->field_0004;
            }
            for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
              *(undefined1 *)&pAVar18->field_0000 = *(undefined1 *)puVar31;
              puVar31 = (byte *)((int)puVar31 + 1);
              pAVar18 = (AnonPointee_TLOBaseTy_0607 *)((int)&pAVar18->field_0000 + 1);
            }
          }
          /* ST_CALLSITE[004BA8A4]: CALL 0x00404a11; direct=00404A11 TLOBaseTy::sub_004C96E0 */
          st::fn_00404A11(this_00);
          local_34 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC70(0x44));
          pAVar24 = local_c;
          local_28 = PTR_008073cc;
          local_30 = 0;
          local_1c = 0;
          local_24 = PTR_008032b8;
          local_20 = 0;
          local_34[1] = st::machine_word_boundary_cast<undefined4>(PTR_00806774);
          local_34[2] = st::machine_word_boundary_cast<undefined4>(PTR_00806774);
          *local_34 = st::machine_word_boundary_cast<undefined4>(PTR_00806774);
          local_34[0xf] = st::machine_word_boundary_cast<undefined4>(PTR_00806774);
          local_34[0x10] = st::machine_word_boundary_cast<undefined4>(PTR_0080678c);
          local_34[0xe] = st::machine_word_boundary_cast<undefined4>(PTR_0080678c);
          local_34[0xd] = st::machine_word_boundary_cast<undefined4>(PTR_0080678c);
          local_34[0xc] = st::machine_word_boundary_cast<undefined4>(PTR_0080678c);
          local_34[0xb] = st::machine_word_boundary_cast<undefined4>(PTR_0080678c);
          local_34[10] = 0;
          local_34[9] = st::machine_word_boundary_cast<undefined4>(PTR_0080678c);
          local_34[8] = st::machine_word_boundary_cast<undefined4>(PTR_0080678c);
          local_34[7] = st::machine_word_boundary_cast<undefined4>(PTR_0080678c);
          if (this_00->field_0245 == CASE_1) {
            if (this_00->field_05DF == 5) {
              local_30 = PTR_00806724->entries[this_00->field_04C8];
              local_2c = (int)PTR_00806724->field_002C;
            }
            else {
              local_34[5] = st::machine_word_boundary_cast<undefined4>(PTR_00806764);
              local_34[4] = st::machine_word_boundary_cast<undefined4>(PTR_00806774);
              local_34[6] = st::machine_word_boundary_cast<undefined4>(PTR_00806774);
            }
          }
          if (this_00->field_0245 == CASE_6) {
            local_34[5] = st::machine_word_boundary_cast<undefined4>(PTR_0080678c);
            local_34[4] = st::machine_word_boundary_cast<undefined4>(PTR_00806764);
          }
          /* ST_CALLSITE[004BA9E7]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
          st::fn_00404CA5
                    ((STT3DSprC *)&this_00->field_01D5,(int *)&local_34,
                     (AnonShape_004AD790_77673787 *)(&local_c->field_0x0 + local_c->field_03DA));
          if ((this_00->field_05F7 != nullptr) &&
             (*(int *)(&DAT_00790c2c + this_00->field_0235 * 4) != 0)) {
            iVar26 = 1;
            uVar28 = 0xc;
            uVar18 = st::fn_004052CC((STT3DSprC *)&this_00->field_01D5);
            st::fn_006EA190((void *)this_00->field_0211,uVar18,uVar28,iVar26);
          }
          if (*(int *)&pAVar24->field_0x3de != 0) {
            pSVar19 = (STT3DSprC *)st::fn_0072E530(0x40);
            if (pSVar19 == nullptr) {
              pSVar19 = nullptr;
            }
            else {
              /* ST_CALLSITE[004BAA3A]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
              pSVar19 = st::fn_00401316(pSVar19);
            }
            this_00->field_05FF = (HoloTy *)pSVar19;
            /* ST_CALLSITE[004BAA63]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
            iVar26 = st::fn_0040537B(pSVar19,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,
                                     0x11);
            if (iVar26 != 0) {
              st::fn_006A5E40
                        (iVar26,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\Artem\\TLO_base.cpp"),0x365);
            }
            memset(local_34, 0, 0x44); /* compiler bulk-zero initialization */
            switch(this_00->field_05AC) {
            case CASE_32:
            case CASE_40:
            case CASE_49:
            case CASE_5C:
              local_34[0xe] = st::machine_word_boundary_cast<undefined4>(PTR_0080677c);
              local_34[0xc] = st::machine_word_boundary_cast<undefined4>(PTR_0080677c);
              local_34[0xd] = st::machine_word_boundary_cast<undefined4>(PTR_0080677c);
              break;
            case CASE_45:
            case CASE_4E:
            case CASE_52:
            case CASE_5F:
            case CASE_69:
            case CASE_70:
            case CASE_72:
              local_34[0xe] = st::machine_word_boundary_cast<undefined4>(PTR_00806774);
            }
            local_30 = 0;
            local_1c = 0;
            local_28 = nullptr;
            /* ST_CALLSITE[004BAAFD]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
            st::fn_00404CA5
                      ((STT3DSprC *)this_00->field_05FF,(int *)&local_34,
                       (AnonShape_004AD790_77673787 *)(&local_c->field_0x0 + local_c->field_03E2));
            uVar28 = 10;
            local_EAX_2922 = st::fn_004052CC((STT3DSprC *)&this_00->field_01D5);
            local_EAX_2934 = st::fn_004052CC((STT3DSprC *)this_00->field_05FF);
            st::fn_006EA340((void *)this_00->field_0211,local_EAX_2934,local_EAX_2922,uVar28);
            pAVar24 = local_c;
          }
          if (*(int *)&pAVar24->field_0x3ee != 0) {
            pSVar19 = (STT3DSprC *)st::fn_0072E530(0x40);
            if (pSVar19 == nullptr) {
              pSVar19 = nullptr;
            }
            else {
              /* ST_CALLSITE[004BAB46]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
              pSVar19 = st::fn_00401316(pSVar19);
            }
            this_00->field_0603 = pSVar19;
            /* ST_CALLSITE[004BAB7D]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
            iVar26 = st::fn_0040537B(pSVar19,PTR_008073cc,this_00->field_0613,this_00->field_0617,
                                     nullptr,this_00->field_060B,this_00->field_060F,
                                     0x11);
            if (iVar26 != 0) {
              st::fn_006A5E40
                        (iVar26,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\Artem\\TLO_base.cpp"),0x386);
            }
            memset(local_34, 0, 0x44); /* compiler bulk-zero initialization */
            if (this_00->field_043C == 1) {
              local_34[0xe] = st::machine_word_boundary_cast<undefined4>(PTR_00806764);
            }
            else {
              local_34[0xe] = st::machine_word_boundary_cast<undefined4>(PTR_0080678c);
            }
            local_30 = 0;
            local_1c = 0;
            local_28 = nullptr;
            /* ST_CALLSITE[004BABEA]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
            st::fn_00404CA5
                      (this_00->field_0603,(int *)&local_34,
                       (AnonShape_004AD790_77673787 *)(&local_c->field_0x0 + local_c->field_03F2));
            if (((this_00->field_0444 != 0) && (this_00->field_0448 != 0)) &&
               (-1 < this_00->field_044C)) {
              /* ST_CALLSITE[004BAC11]: CALL 0x0040498a; direct=0040498A STT3DSprC::UnLoadSequence */
              st::fn_0040498A((STT3DSprC *)&this_00->field_01D5,6);
              uVar28 = 6;
              local_EAX_3194 = st::fn_004052CC((STT3DSprC *)&this_00->field_01D5);
              local_EAX_3206 = st::fn_004052CC(this_00->field_0603);
              st::fn_006EA340((void *)this_00->field_0211,local_EAX_3206,local_EAX_3194,uVar28);
            }
          }
          st::fn_006AB060(&local_34);
          if ((this_00->field_046C == CASE_4) && (this_00->field_0490 != 0)) {
            iVar26 = 0;
            uVar28 = st::fn_004052CC((STT3DSprC *)&this_00->field_01D5);
            st::fn_006EABF0((void *)this_00->field_0211,uVar28,iVar26);
            if ((STT3DSprC *)this_00->field_05FF != nullptr) {
              iVar26 = 0;
              uVar28 = st::fn_004052CC((STT3DSprC *)this_00->field_05FF);
              st::fn_006EABF0((void *)this_00->field_0211,uVar28,iVar26);
            }
            if (this_00->field_0603 != nullptr) {
              iVar26 = 0;
              uVar28 = st::fn_004052CC(this_00->field_0603);
              st::fn_006EABF0((void *)this_00->field_0211,uVar28,iVar26);
            }
          }
          /* ST_CALLSITE[004BACAF]: CALL 0x0040551f; direct=0040551F STAllPlayersC::RestoreGObjData */
          st::fn_0040551F
                    ((STAllPlayersC *)this_00,
                     (undefined4 *)(&local_c->field_0x0 + local_c->field_03EA));
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar23 = CONCAT22(extraout_var,this_00->field_0032);
          /* ST_CALLSITE[004BACBB]: CALL 0x004041f6; direct=004041F6 TLOEmbryoTy::sub_00419CF0 */
          st::fn_004041F6((int *)this_00,uVar23,uVar23);
          if (this_00->field_0251 != 0) {
            local_8 = (byte *)this_00->field_05B4;
            iVar26 = 2 - (uint)(*(int *)(&DAT_00791e30 + this_00->field_0235 * 4) != 1);
            if ((int)local_8 < (int)(local_8 + iVar26)) {
              do {
                iVar38 = this_00->field_05B0;
                if (iVar38 < iVar38 + iVar26) {
                  do {
                    iVar22 = st::fn_00404CCD((short)iVar38,(short)local_8,
                                                (short)this_00->field_05B8);
                    if (iVar22 != 0) {
                      st::fn_006A5E40
                                (-5,g_overwriteContext_007ED77C,
                                 st::mutable_c_string("E:\\__titans\\Artem\\TLO_base.cpp"),0x3a5);
                    }
                    iVar38 = iVar38 + 1;
                  } while (iVar38 < this_00->field_05B0 + iVar26);
                }
                local_8 = local_8 + 1;
              } while ((int)local_8 < this_00->field_05B4 + iVar26);
              st::fn_00401997((AnonShape_0041F630_B1BEE81C *)this_00);
              /* ST_CALLSITE[004BAD5F]: CALL 0x0040197e; direct=0040197E TLOBaseTy::sub_004CBA30 */
              st::fn_0040197E(this_00);
              g_currentExceptionFrame = local_c4.previous;
              return 0;
            }
          }
          break;
        default:
          iVar17 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_base.cpp"),0x3ac,0,0,
                                      st::mutable_c_string("%s"),"I don't now what I suppose to do !");
          if (iVar17 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
        }
        st::fn_00401997((AnonShape_0041F630_B1BEE81C *)this_00);
        /* ST_CALLSITE[004BADA6]: CALL 0x0040197e; direct=0040197E TLOBaseTy::sub_004CBA30 */
        st::fn_0040197E(this_00);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (SVar5 != MESS_SHARED_0003) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      /* ST_CALLSITE[004BA02E]: CALL 0x00402d92; direct=00402D92 TLOBaseTy::sub_004B9A40 */
      st::fn_00402D92(this_00);
      /* ST_CALLSITE[004BA03C]: CALL 0x0040207c; direct=0040207C TLOBaseTy::sub_00419D30 */
      st::fn_0040207C(this_00,this_00->field_0458);
      /* ST_CALLSITE[004BA043]: CALL 0x00404629; direct=00404629 TLOBaseTy::sub_0041D590 */
      st::fn_00404629(this_00);
      /* ST_CALLSITE[004BA062]: CALL 0x00403297; direct=00403297 TLOBaseTy::sub_00417D30 */
      st::fn_00403297(this_00);
      st::fn_004048CC();
      /* ST_CALLSITE[004BA070]: CALL 0x00401e3d; direct=00401E3D sub_004167A0 */
      st::fn_00401E3D(this_00);
      st::fn_0040133E((int)this_00);
      /* ST_CALLSITE[004BA07E]: CALL 0x00404e53; direct=00404E53 TLOBaseTy::sub_004CC330 */
      st::fn_00404E53(this_00);
      st::fn_00404372((AnonShape_004CC900_31EE9CAA *)this_00);
      /* ST_CALLSITE[004BA08C]: CALL 0x00405425; direct=00405425 TLOBaseTy::sub_004DC150 */
      st::fn_00405425(this_00);
      if (*(int *)(&DAT_00791a10 + this_00->field_0235 * 4) != 0) {
        /* ST_CALLSITE[004BA0A2]: CALL 0x004048b8; direct=004048B8 TLOBaseTy::sub_004CBF30 */
        st::fn_004048B8(this_00);
      }
      st::fn_004021D5((STT3DSprC *)&this_00->field_01D5);
      if (this_00->field_0024 != (byte *)(uint)(byte)this_00->field_0010->field_112D) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      st::fn_00404B8D((char)this_00->field_0024);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (SVar5 == MESS_SHARED_010F) {
      uVar23 = this_00->field_002C;
      ppbVar34 = local_4bc;
      for (iVar26 = 0xfd; iVar26 != 0; iVar26 = iVar26 + -1) {
        *ppbVar34 = nullptr;
        ppbVar34 = ppbVar34 + 1;
      }
      pbVar35 = this_00->field_0024;
      pTVar36 = nullptr;
      *(undefined2 *)ppbVar34 = 0;
      local_40 = nullptr;
      local_3c = nullptr;
      local_8 = nullptr;
      local_10 = nullptr;
      local_38 = nullptr;
      local_4bc[3] = (byte *)0x2;
      local_4bc[2] = (byte *)0x1;
      local_4bc[0] = (byte *)0x3e8;
      if (this_00 != nullptr) {
        pTVar36 = &this_00->field_05AC;
      }
      pTVar30 = st::pointer_boundary_cast<TLOBaseTy_field_05ACState *>(&local_4a8);
      memmove(pTVar30, pTVar36, 0x43); /* compiler REP MOVS byte copy */
      iVar26 = 0;
      if (this_00 == nullptr) {
        pTVar33 = nullptr;
      }
      else {
        pTVar33 = &this_00->field_0231;
      }
      pTVar40 = st::pointer_boundary_cast<TLOBaseTy_field_0231State *>(&local_465);
      memmove(pTVar40, pTVar33, 0x37b); /* compiler REP MOVS byte copy */
      iVar26 = 0;
      local_ea = 0x3f6;
      local_4bc[1] = pbVar35;
      local_4bc[4] = (byte *)uVar23;
      /* ST_CALLSITE[004BB764]: CALL 0x004018d4; direct=004018D4 STT3DSprC::SaveSpr */
      local_40 = (byte *)st::fn_004018D4((STT3DSprC *)&this_00->field_01D5,&local_e6);
      local_e2 = st::machine_word_boundary_cast<int>(this_00->field_03D4 * 0x27 + local_ea);
      if ((*(int *)(&DAT_00791a10 + this_00->field_0235 * 4) != 0) &&
         ((STT3DSprC *)this_00->field_05FF != nullptr)) {
        /* ST_CALLSITE[004BB7A5]: CALL 0x004018d4; direct=004018D4 STT3DSprC::SaveSpr */
        local_3c = (byte *)st::fn_004018D4((STT3DSprC *)this_00->field_05FF,&local_de);
      }
      local_da = local_e6 + local_e2;
      /* ST_CALLSITE[004BB7CA]: CALL 0x0040119a; direct=0040119A STAllPlayersC::SaveGObjData */
      local_38 = (byte *)st::fn_0040119A((STAllPlayersC *)this_00,(int *)&local_d6);
      local_d2 = local_de + local_da;
      if (this_00->field_0603 != nullptr) {
        /* ST_CALLSITE[004BB7F7]: CALL 0x004018d4; direct=004018D4 STT3DSprC::SaveSpr */
        local_8 = (byte *)st::fn_004018D4(this_00->field_0603,&local_ce);
        local_ca = local_d6 + local_d2;
      }
      local_18 = (AnonShape_0060EA30_DCEB68AD *)
                 ((this_00->field_03D4 + 0x1a) * 0x27 + local_ce + local_d6 + local_de + local_e6);
      local_10 = st::pointer_boundary_cast<byte *>(st::fn_006AAC10((uint)local_18));
      ppbVar34 = local_4bc;
      pbVar35 = local_10;
      memmove(pbVar35, ppbVar34, 0x3f6); /* compiler REP MOVS byte copy */
      uVar27 = st::machine_word_boundary_cast<uint>(this_00->field_03D4 * 0x27);
      pAVar18 = this_00->field_0607;
      pbVar35 = local_10 + local_ea;
      for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
        *(undefined4 *)pbVar35 = pAVar18->field_0000;
        pAVar18 = (AnonPointee_TLOBaseTy_0607 *)&pAVar18->field_0004;
        pbVar35 = pbVar35 + 4;
      }
      for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
        *pbVar35 = *(byte *)&pAVar18->field_0000;
        pAVar18 = (AnonPointee_TLOBaseTy_0607 *)((int)&pAVar18->field_0000 + 1);
        pbVar35 = pbVar35 + 1;
      }
      pbVar35 = local_40;
      pbVar41 = local_10 + local_e2;
      memmove(pbVar41, pbVar35, local_e6); /* compiler REP MOVS byte copy */
      uVar28 = 0;
      if (local_de != 0) {
        pbVar35 = local_3c;
        pbVar41 = local_10 + local_da;
        memmove(pbVar41, pbVar35, local_de); /* compiler REP MOVS byte copy */
        uVar28 = 0;
      }
      pbVar35 = local_38;
      pbVar41 = local_10 + local_d2;
      memmove(pbVar41, pbVar35, local_d6); /* compiler REP MOVS byte copy */
      uVar28 = 0;
      pbVar35 = local_8;
      pbVar41 = local_10 + local_ca;
      memmove(pbVar41, pbVar35, local_ce); /* compiler REP MOVS byte copy */
      /* ST_CALLSITE[004BB927]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
      st::fn_004025F9(g_playSystem_00802A38,this_00->field_0018,local_10,(uint)local_18);
      if (local_40 != nullptr) {
        st::fn_006AB060(&local_40);
      }
      if (local_3c != nullptr) {
        st::fn_006AB060(&local_3c);
      }
      if (local_10 != nullptr) {
        st::fn_006AB060(&local_10);
      }
      if (local_38 != nullptr) {
        st::fn_006AB060(&local_38);
      }
      if (local_8 == nullptr) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      st::fn_006AB060(&local_8);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (SVar5 != MESS_TORPHIT) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    piVar32 = static_cast<int *>((message->arg0).ptr);
    piVar39 = local_5c;
    memmove(piVar39, piVar32, 0x1c); /* compiler REP MOVS byte copy */
    iVar26 = 0;
    if ((0x9a < local_5c[1]) &&
       (((local_5c[1] < 0x9f || (local_5c[1] == 0xa5)) &&
        (iVar38 = st::fn_0040186B((int)this_00->field_0024,0x68), iVar38 != 0)))) {
      st::fn_00403D6E(this_00,st::machine_word_boundary_cast<int>(local_5c[0] / 2));
    }
    if (this_00->field_05AC == CASE_68) {
      st::fn_0040545C();
    }
    pAVar24 = local_c;
    if (local_5c[1] == 0x9a) {
      pAVar24 = (AnonShape_004B9FA0_0EE05DAC *)st::fn_0040186B(local_54,0x93);
      if ((this_00->field_04A0 == 0) || (this_00->field_04A8 < (int)pAVar24)) {
        this_00->field_04A8 = (int)pAVar24;
        this_00->field_04AC = local_54;
      }
      this_00->field_04A0 = 1;
      this_00->field_04A4 = g_playSystem_00802A38->field_00E4;
      local_c = pAVar24;
      /* ST_CALLSITE[004BB3F8]: CALL dword ptr [EAX + 0xc8] */
      this_00->vfunc_C8(0);
    }
    if (this_00->field_0410 != 0) {
      local_5c[0] = (this_00->field_0414 * local_5c[0]) / 100;
    }
    if (this_00->field_04C0 != 0) {
      local_5c[0] = (this_00->field_04C0 * local_5c[0] * 0x32) / 10000;
    }
    if (local_5c[1] == 0x65) goto LAB_004bb5dd;
    if (local_5c[1] != 0x42) {
      switch(local_5c[1]) {
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
      case 0xa0:
      case 0xa4:
      case 0xa5:
      case 0xb0:
      case 0xb2:
      case 0xb6:
      case 0xb7:
      case 0xb9:
      case 0xba:
      case 0xbb:
      case 0xbf:
        pAVar24 = (AnonShape_004B9FA0_0EE05DAC *)st::fn_0040186B((int)this_00->field_0024,0x67);
        iVar26 = 0;
        if (pAVar24 == (AnonShape_004B9FA0_0EE05DAC *)((int)&st_unresolved_puRam00000000 + 1)) {
          iVar26 = (local_5c[0] * 9) / 10 + (local_5c[0] * 9 >> 0x1f);
LAB_004bb547:
          iVar26 = st::machine_word_boundary_cast<int>(local_5c[0] - (iVar26 - (iVar26 >> 0x1f)));
        }
        else {
          if (pAVar24 == (AnonShape_004B9FA0_0EE05DAC *)((int)&st_unresolved_puRam00000000 + 2)) {
            iVar26 = (local_5c[0] * 0x11) / 0x14 + (local_5c[0] * 0x11 >> 0x1f);
            goto LAB_004bb547;
          }
          if (pAVar24 == (AnonShape_004B9FA0_0EE05DAC *)((int)&st_unresolved_puRam00000000 + 3)) {
            iVar26 = (local_5c[0] * 4) / 5 + (local_5c[0] * 4 >> 0x1f);
            goto LAB_004bb547;
          }
        }
        local_5c[0] = st::machine_word_boundary_cast<int>(local_5c[0] - iVar26);
        local_c = pAVar24;
      }
      /* ST_CALLSITE[004BB561]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_5569 = st::fn_004049B7(*(char *)&this_00->field_0024);
      local_EAX_5569 = (int)(byte)local_EAX_5569;
      if (local_EAX_5569 == 1) {
        pbVar35 = this_00->field_0024;
        iVar26 = 4;
LAB_004bb58d:
        pAVar24 = (AnonShape_004B9FA0_0EE05DAC *)st::fn_0040186B((int)pbVar35,iVar26);
        local_c = pAVar24;
      }
      else {
        if (local_EAX_5569 == 2) {
          pbVar35 = this_00->field_0024;
          iVar26 = 0x81;
          goto LAB_004bb58d;
        }
        if (local_EAX_5569 == 3) {
          pbVar35 = this_00->field_0024;
          iVar26 = 0x65;
          goto LAB_004bb58d;
        }
      }
      iVar26 = 0;
      if (pAVar24 == (AnonShape_004B9FA0_0EE05DAC *)((int)&st_unresolved_puRam00000000 + 1)) {
        iVar26 = st::machine_word_boundary_cast<int>(local_5c[0] * 8);
      }
      else if (pAVar24 == (AnonShape_004B9FA0_0EE05DAC *)((int)&st_unresolved_puRam00000000 + 2)) {
        iVar26 = st::machine_word_boundary_cast<int>(local_5c[0] * 6);
      }
      else {
        if (pAVar24 != (AnonShape_004B9FA0_0EE05DAC *)((int)&st_unresolved_puRam00000000 + 3)) goto LAB_004bb5dd;
        iVar26 = st::machine_word_boundary_cast<int>(local_5c[0] * 4);
      }
      iVar26 = st::machine_word_boundary_cast<int>(local_5c[0] - iVar26 / 10);
      goto LAB_004bb5dd;
    }
    /* ST_CALLSITE[004BB478]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_5336 = st::fn_004049B7(*(char *)&this_00->field_0024);
    local_EAX_5336 = (int)(byte)local_EAX_5336;
    if (local_EAX_5336 == 1) {
      pbVar35 = this_00->field_0024;
      iVar38 = 0x2d;
LAB_004bb4a1:
      pAVar24 = (AnonShape_004B9FA0_0EE05DAC *)st::fn_0040186B((int)pbVar35,iVar38);
      local_c = pAVar24;
    }
    else {
      if (local_EAX_5336 == 2) {
        pbVar35 = this_00->field_0024;
        iVar38 = 0x2d;
        goto LAB_004bb4a1;
      }
      if (local_EAX_5336 == 3) {
        pbVar35 = this_00->field_0024;
        iVar38 = 0x6a;
        goto LAB_004bb4a1;
      }
    }
    if (pAVar24 == (AnonShape_004B9FA0_0EE05DAC *)((int)&st_unresolved_puRam00000000 + 1)) {
      iVar26 = st::machine_word_boundary_cast<int>(local_5c[0] - (local_5c[0] * 9) / 10);
    }
    local_5c[0] = st::machine_word_boundary_cast<int>(local_5c[0] - iVar26);
LAB_004bb5dd:
    if (200 < iVar26) {
      iVar26 = 200;
    }
    local_5c[0] = st::machine_word_boundary_cast<int>(local_5c[0] - iVar26);
    if (local_5c[0] < 0) {
      local_5c[0] = 0;
    }
    st::fn_00402B8A(this_00,local_5c[0],(ushort)local_54,local_50);
    if (this_00->field_0245 == CASE_1) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((g_aiBossClass_008117BC != nullptr) && (local_5c[0] != 0)) {
      local_7c.arg0.words.high = this_00->field_0032;
      local_7c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
      local_7c.arg1.words.high = local_50;
      local_7c.id = MESS_SHARED_5DD5;
      local_7c.arg1.words.low = (word)local_54;
      /* ST_CALLSITE[004BB657]: CALL dword ptr [EDX] */
      g_aiBossClass_008117BC->GetMessage(&local_7c);
    }
    if (g_sndUnderAttMeneg_00811798 != nullptr) {
      /* ST_CALLSITE[004BB67C]: CALL 0x004028c4; direct=004028C4 SndUnderAttMenegC::sub_0061F8B0 */
      st::fn_004028C4
                (g_sndUnderAttMeneg_00811798,this_00->field_05B0,this_00->field_05B4,
                 (uint)this_00->field_0024);
    }
    this_00->field_0454 = g_playSystem_00802A38->field_00E4;
    if (this_00->field_0458 == 0xfe) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    this_00->field_0458 = local_54;
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  }
  if (SVar5 < MESS_SHARED_0129) {
    if (SVar5 == MESS_HITKILL) {
      TVar9 = this_00->field_0245;
      piVar32 = static_cast<int *>((message->arg0).ptr);
      piVar39 = local_5c;
      memmove(piVar39, piVar32, 0x1c); /* compiler REP MOVS byte copy */
      if ((TVar9 != CASE_1) && (TVar9 != CASE_6)) {
        this_00->field_0241 = 0;
        this_00->field_05D7 = 0;
        this_00->field_05DF = local_44;
        if ((local_44 == 2) || (local_44 == 5)) {
          iVar26 = 1;
        }
        else {
          iVar26 = 0;
        }
        /* ST_CALLSITE[004BBD2E]: CALL 0x004010aa; direct=004010AA TLOBaseTy::SetState */
        st::fn_004010AA(this_00,1,iVar26);
        if ((this_00->field_05DF == 0) || (this_00->field_05DF == 4)) {
          uVar28 = (uint)(this_00->field_024D == 4);
          /* ST_CALLSITE[004BBD5B]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          local_EAX_7611 = st::fn_004049B7(*(char *)&this_00->field_0024);
          local_EAX_7611 = (int)(byte)local_EAX_7611;
          st::fn_00404A7F((int)this_00->field_0041,(int)this_00->field_0043,
                             (int)this_00->field_0045,this_00->field_05AC,(int *)this_00,0xffffffff,
                             0xffffffff,local_EAX_7611,uVar28);
        }
        if ((this_00->field_05DF == 2) || (this_00->field_05DF == 5)) {
          this_00->field_0454 = g_playSystem_00802A38->field_00E4;
          if (this_00->field_0458 != 0xfe) {
            this_00->field_0458 = local_54;
          }
        }
        else {
          if ((local_54 != 0xfe) && (g_aiBossClass_008117BC != nullptr)) {
            local_7c.arg1.words.high = local_50;
            local_7c.id = 0x5dd1;
            local_7c.arg0.words.high = this_00->field_0032;
            local_7c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
            local_7c.arg1.words.low = (word)local_54;
            /* ST_CALLSITE[004BBDD0]: CALL dword ptr [EAX] */
            g_aiBossClass_008117BC->GetMessage(&local_7c);
          }
          local_7c.arg0 = st::message_arg_u32(static_cast<uint32_t>(this_00->field_0008));
          local_7c.unknown_08 = this_00->field_000C->systemId;
          local_7c.unknown_0c = 0;
          local_7c.id = MESS_SYSTEMCLASSTY_000A;
          st::fn_006E60A0(this_00,&local_7c.unknown_00);
        }
      }
      if (g_aiBossClass_008117BC == nullptr) {
        local_7c.id = MESS_SHARED_5DD5;
        local_7c.arg0.words.high = this_00->field_0032;
        local_7c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
        local_7c.arg1.words.high = 0xffff;
        local_7c.arg1.words.low = (word)local_54;
        /* ST_CALLSITE[004BBE50]: CALL dword ptr [EAX] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (*(code *)*st_unresolved_puRam00000000)(&local_7c);
      }
      if (g_sndUnderAttMeneg_00811798 != nullptr) {
        /* ST_CALLSITE[004BBE75]: CALL 0x004028c4; direct=004028C4 SndUnderAttMenegC::sub_0061F8B0 */
        st::fn_004028C4
                  (g_sndUnderAttMeneg_00811798,this_00->field_05B0,this_00->field_05B4,
                   (uint)this_00->field_0024);
      }
      this_00->field_0454 = g_playSystem_00802A38->field_00E4;
      if (this_00->field_0458 == 0xfe) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      this_00->field_0458 = local_54;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (SVar5 != MESS_SHARED_0121) {
      if (SVar5 == MESS_SHARED_0122) {
        piVar32 = static_cast<int *>((message->arg0).ptr);
        if ((byte *)*piVar32 != this_00->field_0024) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        this_00->field_0410 = 1;
        this_00->field_0414 = piVar32[2];
        this_00->field_0418 = g_playSystem_00802A38->field_00E4;
        this_00->field_041C = piVar32[1];
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (SVar5 != MESS_TLOBASETY_0123) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (this_00->field_05AC == CASE_4D) {
        st::fn_0040500B(this_00,(message->arg0).i32);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (this_00->field_05AC != CASE_73) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      TVar8 = (message->arg0).i32;
      this_00->field_04D0 = TVar8;
      if ((int)TVar8 < 0) {
        this_00->field_04D0 = CASE_0;
      }
      if (5000 < (int)this_00->field_04D0) {
        this_00->field_04D0 = 5000;
      }
      this_00->field_04D4 = g_playSystem_00802A38->field_00E4;
      if (this_00->field_05AC != CASE_73) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (this_00->field_04D0 != CASE_0) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      st::fn_00405A33((AnonShape_004C2D40_7C578146 *)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    local_18 = static_cast<AnonShape_0060EA30_DCEB68AD *>((message->arg0).ptr);
    if ((7 < *(uint *)local_18) ||
       ((g_playSystem_00802A38 != nullptr &&
        (7 < g_bulkInitializedRecords_008087C7[*(uint *)local_18].field_0022)))) goto LAB_004bbcb2;
    bVar1 = *(byte *)local_18;
    bVar2 = *(byte *)&this_00->field_0024;
    local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(bVar1));
    local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar2));
    if (DAT_00808a8f == '\0') {
      if (bVar1 == bVar2) {
LAB_004bbc2b:
        iVar26 = 0;
      }
      else {
        bVar3 = g_playerRelationMatrix[bVar1][bVar2];
        if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
          iVar26 = -2;
        }
        else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
          iVar26 = -1;
        }
        else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
          iVar26 = 1;
        }
        else {
          if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_004bbc2b;
          iVar26 = 2;
        }
      }
      bVar42 = iVar26 < 0;
    }
    else {
      bVar42 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
               g_bulkInitializedRecords_008087C7[bVar1].field_0023;
    }
    if ((bVar42) && (iVar26 = st::fn_006B0FD0(0x800f90), iVar26 != 0)) {
      this_00->field_0420 = 1;
      this_00->field_0265 = st::machine_word_boundary_cast<undefined4>(this_00->field_0265 & 0xfffffffd);
      this_00->field_026D = 0;
      this_00->field_0424 = g_playSystem_00802A38->field_00E4;
      this_00->field_0428 = *(uint *)&local_18->field_0x4;
      (message->arg1).u32 = 1;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
LAB_004bbcb2:
    (message->arg1).u32 = 0;
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  }
  if (SVar5 != MESS_TLOEMBRYOTY_4401) {
    if (SVar5 != MESS_SHARED_440F) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    /* ST_CALLSITE[004BBEC8]: CALL 0x0040197e; direct=0040197E TLOBaseTy::sub_004CBA30 */
    st::fn_0040197E(this_00);
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  }
  dVar21 = (message->arg0).u32;
  bVar1 = ((byte *)dVar21)[0xe];
  switch(bVar1) {
  case 8:
    if ((this_00->field_0245 == CASE_4) && (this_00->field_03DC != 0)) {
      if (this_00->field_0249 != -1) {
        this_00->field_0249 = 0xffffffff;
      }
      /* ST_CALLSITE[004BC524]: CALL 0x00404e9e; direct=00404E9E TLOBaseTy::sub_004EA620 */
      iVar26 = st::fn_00404E9E(this_00);
      if (iVar26 != 0) {
        this_00->field_03FC = 1;
        this_00->field_0400 = 0;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    break;
  case 9:
    TVar7 = this_00->field_05AC;
    if (TVar7 == CASE_33) {
      bVar1 = **(byte **)(dVar21 + 0x17);
      if ((bVar1 != 0) && (bVar1 != 1)) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      st::fn_00402581(this_00,(int *)(uint)bVar1);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((TVar7 != CASE_3C) && (TVar7 != CASE_53)) {
      st::fn_0040142E(this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (this_00->field_0024 == (byte *)this_00->field_023D) {
LAB_004bc117:
      bVar42 = true;
    }
    else {
      /* ST_CALLSITE[004BC0D9]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_8505 = st::fn_004049B7((char)(byte *)this_00->field_023D);
      iVar26 = this_00->field_0235;
      /* ST_CALLSITE[004BC0FE]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      uVar29 = st::fn_004049B7(*(char *)&this_00->field_0024);
      uVar29 = (int)(byte)uVar29;
      if ((&DAT_007e1984)[uVar29 + (iVar26 * 3 + (uint)(byte)local_EAX_8505) * 3] != '\0')
      goto LAB_004bc117;
      bVar42 = false;
    }
    if (bVar42) {
      st::fn_00404601((int)this_00->field_0024);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x14:
    iVar38 = **(int **)(dVar21 + 0x17);
    if (iVar38 < 0) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (g_worldGrid.sizeX <= iVar38) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    iVar26 = (*(int **)(dVar21 + 0x17))[1];
    if (iVar26 < 0) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (g_worldGrid.sizeY <= iVar26) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    switch(this_00->field_05AC) {
    case CASE_32:
    case CASE_33:
    case CASE_37:
    case CASE_40:
    case CASE_49:
    case CASE_5C:
    case CASE_6C:
      this_00->field_042C = 1;
      this_00->field_0430 = **(undefined4 **)(dVar21 + 0x17);
      this_00->field_0434 = *(undefined4 *)(*(int *)(dVar21 + 0x17) + 4);
      this_00->field_0438 = 2;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (this_00->field_0245 != CASE_4) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    iVar22 = this_00->field_05B8;
    goto LAB_004bc4c0;
  case 0x15:
    if (this_00->field_0245 != CASE_4) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (g_worldGrid.sizeX <= (short)(ushort)**(byte **)(dVar21 + 0x17)) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    iVar26 = this_00->field_05B4;
    iVar22 = 4 - (uint)**(byte **)(dVar21 + 0x17);
    iVar38 = this_00->field_05B0;
LAB_004bc4c0:
    /* ST_CALLSITE[004BC4C2]: CALL 0x0040542a; direct=0040542A TLOBaseTy::sub_004C6C70 */
    st::fn_0040542A(this_00,iVar38,iVar26,iVar22);
    if (this_00->field_0249 != -1) {
      this_00->field_0249 = 0xffffffff;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x16:
    pcVar13 = *(char **)(dVar21 + 0x17);
    if (*(int *)(&DAT_00792778 + this_00->field_0235 * 4) != 0) {
      if (*pcVar13 == '\a') {
        this_00->field_0265 = st::machine_word_boundary_cast<undefined4>(this_00->field_0265 & 0xfffffffd);
        this_00->field_026D = 0;
      }
      else if (this_00->field_0261 != 0) {
        if (*(int *)(&DAT_00792a90 + this_00->field_0235 * 8) == 1) {
          if (*pcVar13 == '\0') {
            uVar23 = *(undefined4 *)(pcVar13 + 1);
            this_00->field_0265 = st::machine_word_boundary_cast<undefined4>(this_00->field_0265 | 2);
            this_00->field_026D = uVar23;
          }
        }
        else if ((((*(int *)(&DAT_00792a90 + this_00->field_0235 * 8) == 2) &&
                  (bVar1 = pcVar13[5], (short)(ushort)bVar1 < g_worldGrid.sizeX)) &&
                 (bVar2 = pcVar13[6], (short)(ushort)bVar2 < g_worldGrid.sizeY)) &&
                (bVar3 = pcVar13[7], (short)(ushort)bVar3 < g_worldGrid.sizeX)) {
          if (this_00->field_05AC == CASE_70) {
            st::fn_00401627(this_00,(uint)bVar1,(uint)bVar2,(uint)bVar3);
          }
          else {
            this_00->field_0265 = st::machine_word_boundary_cast<undefined4>(this_00->field_0265 | 2);
            *(uint *)&this_00->field_0x2a5 = (uint)bVar1;
            this_00->field_02A9 = (uint)bVar2;
            *(uint *)&this_00->field_0x2ad = (uint)bVar3;
          }
        }
      }
      if (this_00->field_0024 == (byte *)(uint)(byte)this_00->field_0010->field_112D) {
        TVar7 = this_00->field_05AC;
        if (TVar7 == CASE_3E) {
          /* ST_CALLSITE[004BC694]: CALL dword ptr [EDX + 0x90] */
          this_00->vfunc_90(4,0x23f);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_3F) {
          /* ST_CALLSITE[004BC6C0]: CALL dword ptr [EAX + 0x90] */
          this_00->vfunc_90(4,0x248);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_51) {
          /* ST_CALLSITE[004BC6EC]: CALL dword ptr [EDX + 0x90] */
          this_00->vfunc_90(4,0x28a);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_46) {
          /* ST_CALLSITE[004BC718]: CALL dword ptr [EAX + 0x90] */
          this_00->vfunc_90(4,0x305);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_47) {
          /* ST_CALLSITE[004BC744]: CALL dword ptr [EDX + 0x90] */
          this_00->vfunc_90(4,0x30e);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_4A) {
          /* ST_CALLSITE[004BC770]: CALL dword ptr [EAX + 0x90] */
          this_00->vfunc_90(4,0x324);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_4B) {
          /* ST_CALLSITE[004BC79C]: CALL dword ptr [EDX + 0x90] */
          this_00->vfunc_90(4,0x32d);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_66) {
          /* ST_CALLSITE[004BC7C8]: CALL dword ptr [EAX + 0x90] */
          this_00->vfunc_90(4,0x3dc);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_67) {
          /* ST_CALLSITE[004BC7F4]: CALL dword ptr [EDX + 0x90] */
          this_00->vfunc_90(4,0x3e3);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_6B) {
          /* ST_CALLSITE[004BC820]: CALL dword ptr [EAX + 0x90] */
          this_00->vfunc_90(4,0x3fe);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_70) {
          /* ST_CALLSITE[004BC84C]: CALL dword ptr [EDX + 0x90] */
          this_00->vfunc_90(4,0x419);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_71) {
          /* ST_CALLSITE[004BC87C]: CALL dword ptr [EAX + 0x90] */
          this_00->vfunc_90(4,0x420);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
      }
    }
    break;
  case 0x17:
    pcVar13 = *(char **)(dVar21 + 0x17);
    TVar7 = this_00->field_05AC;
    if (TVar7 == CASE_4C) {
      cVar43 = *pcVar13;
      if (cVar43 == '\x06') {
        this_00->field_04E0[0] = 1;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar43 == '\a') {
        this_00->field_04E0[0] = 0;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar43 != '\b') {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      TVar8 = this_00->field_04D0;
      if (TVar8 != CASE_0) {
        if (TVar8 == CASE_1) {
          this_00->field_04D4 = 2;
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar8 != CASE_2) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
      }
    }
    else {
      if (TVar7 != CASE_43) {
        if (((TVar7 == CASE_36) || (TVar7 == CASE_5D)) && (*pcVar13 == '\v')) {
          iVar26 = st::fn_0040186B((int)this_00->field_0024,
                                      *(int *)(&DAT_00798fb0 + this_00->field_0239 * 4));
          if (iVar26 != 0) {
            st::fn_00402D15(this_00,*(int *)(pcVar13 + 1),*(int *)(pcVar13 + 5));
          }
          if (this_00->field_0024 != (byte *)(uint)(byte)this_00->field_0010->field_112D) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          /* ST_CALLSITE[004BCABA]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          local_EAX_11034 = st::fn_004049B7(*(char *)&this_00->field_023D);
          local_EAX_11034 = (int)(byte)local_EAX_11034;
          if (local_EAX_11034 == 1) {
            /* ST_CALLSITE[004BCB2A]: CALL dword ptr [EDX + 0x90] */
            this_00->vfunc_90(4,0x210);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (local_EAX_11034 != 2) {
            if (local_EAX_11034 != 3) {
              g_currentExceptionFrame = local_c4.previous;
              return 0;
            }
            /* ST_CALLSITE[004BCADC]: CALL dword ptr [EDX + 0x90] */
            this_00->vfunc_90(4,0x39f);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          /* ST_CALLSITE[004BCB03]: CALL dword ptr [EAX + 0x90] */
          this_00->vfunc_90(4,0x2d8);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if ((TVar7 == CASE_3C) || (TVar7 == CASE_53)) {
          if (*pcVar13 == '\f') {
            if (g_packedRecords_A62x8[(int)this_00->field_0024].field1982_0xa0e != 0) {
              g_currentExceptionFrame = local_c4.previous;
              return 0;
            }
            uVar28 = st::machine_word_boundary_cast<uint>(this_00->field_001C * 0x41c64e6d + 0x3039);
            this_00->field_001C = uVar28;
            st::fn_00403486((int)this_00->field_0024,uVar28 >> 0x10);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (*pcVar13 != '\r') {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          st::fn_004027B1((int)this_00->field_0024);
          if (this_00->field_0024 != (byte *)(uint)(byte)this_00->field_0010->field_112D) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (g_infocPanel_00801698 == nullptr) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          /* ST_CALLSITE[004BCD52]: CALL dword ptr [EAX + 0x1c] */
          (*g_infocPanel_00801698->vtable->SetPanel)((SpecPanelTy *)g_infocPanel_00801698,'\x01');
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_70) {
          if (*pcVar13 != '\x12') {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (this_00->field_04E0[4] != 0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if ((int)this_00->field_04E0[3] < 100) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          this_00->field_04D0 = CASE_1;
          this_00->field_0261 = 1;
          this_00->field_0265 = st::machine_word_boundary_cast<undefined4>(this_00->field_0265 | 2);
          *(undefined4 *)&this_00->field_0x2a5 = 0xffffffff;
          this_00->field_02A9 = 0xffffffff;
          *(undefined4 *)&this_00->field_0x2ad = 0xffffffff;
          this_00->field_04E0[3] = 0;
          this_00->field_04D8 = g_playSystem_00802A38->field_00E4;
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 != CASE_6D) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (*pcVar13 == '\x19') {
          iVar26_mg26 = st::fn_006E62D0
                                  (g_playSystem_00802A38,
                                   *(AnonShape_005EFAE0_B406B78B **)(pcVar13 + 0x1d),
                                   (int *)&local_18);
          if (iVar26_mg26 != 0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          iVar26 = st::fn_004052E0(this_00,(int)local_18);
          if (iVar26 == 0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if ((this_00->field_04D0 != CASE_0) || (iVar26 = 100, this_00->field_04D4 != 0)) {
            iVar26 = 0x32;
          }
          st::fn_00401122(this_00,(int *)local_18,iVar26);
        }
        else {
          if (*pcVar13 != '\x1a') {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (1 < *(uint *)(pcVar13 + 0x1d)) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if ((int *)this_00->field_04E0[*(uint *)(pcVar13 + 0x1d) - 4] == 0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          st::fn_00401C2B(this_00,(int *)this_00->field_04E0[*(uint *)(pcVar13 + 0x1d) - 4]);
        }
        if (this_00->field_0024 != (byte *)(uint)(byte)this_00->field_0010->field_112D) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        /* ST_CALLSITE[004BCC9F]: CALL dword ptr [EDX + 0x90] */
        this_00->vfunc_90(4,0x40b);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      cVar43 = *pcVar13;
      if (cVar43 == '\x06') {
        this_00->field_04E0[0] = 1;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar43 == '\a') {
        this_00->field_04E0[0] = 0;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar43 != '\t') {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if ((this_00->field_04D0 != CASE_0) && (this_00->field_04D0 != CASE_2)) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    if (4999 < (int)this_00->field_04D8) {
      this_00->field_04D4 = 1;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x1a:
    pcVar13 = *(char **)(dVar21 + 0x17);
    if (*pcVar13 == '\x02') {
      st::fn_004013CA(this_00,(short)*(undefined4 *)(pcVar13 + 1),
                         (short)*(undefined4 *)(pcVar13 + 5),(short)*(undefined4 *)(pcVar13 + 9));
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x1e:
    pbVar35 = *(byte **)(dVar21 + 0x17);
    if (*pbVar35 == 0) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (8 < *pbVar35) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((this_00->field_0024 == (byte *)(uint)(byte)this_00->field_0010->field_112D) &&
       ((TVar7 = this_00->field_05AC, TVar7 == CASE_35 ||
        ((0x53 < (int)TVar7 && ((int)TVar7 < 0x5b)))))) {
      /* ST_CALLSITE[004BBFB3]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_8211 = st::fn_004049B7(*(char *)&this_00->field_023D);
      local_EAX_8211 = (int)(byte)local_EAX_8211;
      if (local_EAX_8211 == 1) {
        pTVar25 = this_00->vtable;
        arg_2 = 0x208;
LAB_004bbfe9:
        /* ST_CALLSITE[004BBFED]: CALL dword ptr [EAX + 0x90] */
        (*pTVar25->vfunc_90)(this_00,4,arg_2);
      }
      else if (local_EAX_8211 == 2) {
        /* ST_CALLSITE[004BBFDA]: CALL dword ptr [EDX + 0x90] */
        this_00->vfunc_90(4,0x2d0);
      }
      else if (local_EAX_8211 == 3) {
        pTVar25 = this_00->vtable;
        arg_2 = 0x38b;
        goto LAB_004bbfe9;
      }
    }
    /* ST_CALLSITE[004BC007]: CALL 0x00405ace; direct=00405ACE TLOBaseTy::sub_004C7860 */
    local_EAX_8295 =
         st::fn_00405ACE(this_00,(uint)*pbVar35,*(uint *)(pbVar35 + 1),(int)*(short *)(pbVar35 + 5),0,1
                     );
    if (local_EAX_8295 != 0) {
      st::fn_00405759(this_00,(uint)*pbVar35,*(uint *)(pbVar35 + 1),(int)*(short *)(pbVar35 + 5),
                         (uint)(*pbVar35 != 2),*(uint *)(pbVar35 + 7),0,0xff,nullptr);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x1f:
    if ((this_00->field_05AC == CASE_3A) && (**(char **)(dVar21 + 0x17) == '\x02')) {
      st::fn_00404D9F((int)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((this_00->field_05AC == CASE_64) && (**(char **)(dVar21 + 0x17) == '\x02')) {
      st::fn_00402C07((int)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x20:
    pbVar35 = *(byte **)(dVar21 + 0x17);
    if ((this_00->field_05AC == CASE_52) || (this_00->field_05AC == CASE_5F)) {
      if (*pbVar35 == 1) {
        st::fn_00401B36(this_00,(uint)*(ushort *)(pbVar35 + 1),*(int *)(pbVar35 + 3));
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      st::fn_00401C1C(this_00,(uint)*pbVar35,(uint)*(ushort *)(pbVar35 + 1),*(int *)(pbVar35 + 3)
                         ,(uint)*(ushort *)(pbVar35 + 7));
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x22:
    local_EAX_8051 = st::fn_00401F5A(this_00->field_05AC);
    if (local_EAX_8051 == 3) {
      st::fn_00405DCB((AnonShape_004D7270_8F0A3C37 *)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    st::fn_00405759(this_00,5,0,0,0,0xffffffff,0,0xff,nullptr);
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  case 0x23:
    puVar10 = *(uint **)(dVar21 + 0x17);
    uVar28 = puVar10[1];
    if (((((-1 < (int)uVar28) && ((int)uVar28 < (int)g_worldGrid.sizeX)) &&
         (uVar27 = puVar10[2], -1 < (int)uVar27)) &&
        (((int)uVar27 < (int)g_worldGrid.sizeY && (uVar11 = puVar10[3], -1 < (int)uVar11)))) &&
       (((int)uVar11 < (int)g_worldGrid.sizeX &&
        ((uVar12 = *puVar10, 0x31 < uVar12 && (uVar12 < 0x74)))))) {
      if (this_00->field_05AC == CASE_53) {
        st::fn_00405A0B(this_00,uVar12,uVar28,uVar27,uVar11);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (this_00->field_05AC == CASE_6C) {
        st::fn_00401532(this_00,uVar28,uVar27,uVar11);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    break;
  case 0x27:
    TVar7 = this_00->field_05AC;
    if (TVar7 == CASE_50) {
      st::fn_0040268A(this_00,(uint)**(byte **)(dVar21 + 0x17),
                         (uint)(*(byte **)(dVar21 + 0x17))[1]);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((TVar7 == CASE_34) && (**(char **)(dVar21 + 0x17) == '\x02')) {
      st::fn_00402FFE(this_00,(uint)(byte)(*(char **)(dVar21 + 0x17))[1]);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((TVar7 == CASE_5B) && (**(char **)(dVar21 + 0x17) == '\x02')) {
      st::fn_0040312A(this_00,(uint)(byte)(*(char **)(dVar21 + 0x17))[1]);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x28:
    if (**(char **)(dVar21 + 0x17) == '\0') {
      if ((this_00->field_0245 == CASE_0) || (this_00->field_0245 == CASE_5)) {
        /* ST_CALLSITE[004BC169]: CALL 0x004010aa; direct=004010AA TLOBaseTy::SetState */
        st::fn_004010AA(this_00,2,1);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    else if (this_00->field_0245 == CASE_4) {
      /* ST_CALLSITE[004BC19D]: CALL 0x004015a5; direct=004015A5 TLOBaseTy::sub_004C7070 */
      iVar26 = st::fn_004015A5(this_00,1);
      if (iVar26 != 0) {
        /* ST_CALLSITE[004BC1AC]: CALL 0x004010aa; direct=004010AA TLOBaseTy::SetState */
        st::fn_004010AA(this_00,3,1);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      local_8 = nullptr;
      iVar26 = st::machine_word_boundary_cast<int>(this_00->field_05B8 + -2);
      if (-1 < iVar26) {
        sVar16 = (short)this_00->field_05B0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_14 = CONCAT22((short)(bVar1 - 8 >> 0x10),sVar16);
        sVar4 = *(short *)&this_00->field_05B4;
        do {
          sVar15 = (short)iVar26;
          if (((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) || (sVar4 < 0)) ||
              ((g_worldGrid.sizeY <= sVar4 || (sVar15 < 0)))) || (g_worldGrid.sizeZ <= sVar15)) {
            pSVar29 = nullptr;
          }
          else {
            pSVar29 = STGridAt3D(g_worldGrid, sVar16, sVar4, sVar15).objects[0];
          }
          if (pSVar29 == nullptr) {
            if (((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) ||
               ((sVar4 < 0 ||
                (((g_worldGrid.sizeY <= sVar4 || (sVar15 < 0)) || (g_worldGrid.sizeZ <= sVar15))))))
            {
              sVar15 = -1;
            }
            else {
              sVar15 = STGridAt3D(g_pathingGrid, sVar16, sVar4, sVar15);
            }
            if (sVar15 == -1) {
              local_8 = (byte *)0x1;
              /* ST_CALLSITE[004BC2DC]: CALL 0x0040542a; direct=0040542A TLOBaseTy::sub_004C6C70 */
              st::fn_0040542A(this_00,this_00->field_05B0,this_00->field_05B4,iVar26 + 1);
              break;
            }
          }
          iVar26 = iVar26 + -1;
        } while (-1 < iVar26);
      }
      if (local_8 == nullptr) {
        sVar16 = (short)this_00->field_05B0;
        sVar4 = *(short *)&this_00->field_05B4;
        if (((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) ||
           ((sVar4 < 0 || ((g_worldGrid.sizeY <= sVar4 || (g_worldGrid.sizeZ < 1)))))) {
          pSVar29 = nullptr;
        }
        else {
          pSVar29 = g_worldGrid.cells[(int)g_worldGrid.sizeX * (int)sVar4 + (int)sVar16].objects[0];
        }
        bVar42 = false;
        if (pSVar29 == nullptr) {
          if ((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) || (sVar4 < 0)) ||
             ((g_worldGrid.sizeY <= sVar4 || (g_worldGrid.sizeZ < 1)))) {
            sVar16 = -1;
          }
          else {
            sVar16 = g_pathingGrid.cells[(int)g_pathingGrid.sizeX * (int)sVar4 + (int)sVar16];
          }
          if (sVar16 == 0) {
            /* ST_CALLSITE[004BC39C]: CALL 0x0040542a; direct=0040542A TLOBaseTy::sub_004C6C70 */
            st::fn_0040542A(this_00,this_00->field_05B0,this_00->field_05B4,0);
            bVar42 = true;
          }
        }
        if (!bVar42) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
      }
      this_00->field_0249 = 3;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x2a:
    if (this_00->field_05AC != CASE_6D) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    switch(**(undefined1 **)(dVar21 + 0x17)) {
    case 0:
      if (this_00->field_04D0 != CASE_0) {
        st::fn_00405097(this_00,0,st::machine_word_boundary_cast<int>(this_00->field_04E0[0] - 5));
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 1:
      if (this_00->field_04D0 != CASE_0) {
        st::fn_00405097(this_00,0,st::machine_word_boundary_cast<int>(this_00->field_04E0[0] + 5));
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 2:
      if (this_00->field_04D4 != 0) {
        st::fn_00405097(this_00,1,st::machine_word_boundary_cast<int>(this_00->field_04E0[1] - 5));
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 3:
      if (this_00->field_04D4 != 0) {
        st::fn_00405097(this_00,1,st::machine_word_boundary_cast<int>(this_00->field_04E0[1] + 5));
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 4:
      uVar28 = 0;
      goto LAB_004bd06b;
    case 5:
      uVar28 = 1;
LAB_004bd06b:
      st::fn_00405C40(this_00,uVar28);
    }
  }
  g_currentExceptionFrame = local_c4.previous;
  return 0;
}

