#include "../../pseudocode_runtime.h"


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

int __thiscall TLOBaseTy::GetMessage(TLOBaseTy *this,STMessage *message)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  STMessageId SVar5;
  void *this_00;
  AnonPointee_STT3DSprC_0020 *pAVar6;
  TLOBaseTy_field_05ACState TVar7;
  TLOBaseTy_field_04D0State TVar8;
  TLOBaseTy_field_0245State TVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  code *pcVar14;
  TLOBaseTy *this_01;
  short sVar15;
  short sVar16;
  int iVar17;
  uint uVar18;
  undefined *puVar19;
  AnonPointee_TLOBaseTy_0607 *pAVar20;
  AnonShape_004AB810_8E5693D5 *pAVar21;
  STT3DSprC *pSVar22;
  undefined4 *puVar23;
  dword dVar24;
  int iVar25;
  undefined4 uVar26;
  AnonShape_004B9FA0_0EE05DAC *pAVar27;
  TLOBaseTyVTable *pTVar28;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  uint uVar29;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  STWorldObject *pSVar30;
  TLOBaseTy_field_05ACState *pTVar31;
  TLOBaseTy_field_0231State *pTVar32;
  byte **ppbVar33;
  byte *pbVar34;
  TLOBaseTy_field_05ACState *pTVar35;
  undefined4 *puVar36;
  int iVar37;
  int *piVar38;
  TLOBaseTy_field_0231State *pTVar39;
  byte *pbVar40;
  bool bVar41;
  char cVar42;
  int *piVar43;
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
  undefined4 local_7c [2];
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined2 local_62;
  int local_5c [2];
  int local_54;
  undefined2 local_50;
  int local_44;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
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
  iVar17 = Library::MSVCRT::__setjmp3(local_c4.jumpBuffer,0);
  this_01 = local_80;
  if (iVar17 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar37 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_base.cpp",0x6d9,0,iVar17,
                                "TLOBaseTy::GetMessage error mess->id == %i",message->id);
    if (iVar37 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar17,0,"E:\\__titans\\Artem\\TLO_base.cpp",0x6da);
    return iVar17;
  }
  STSprGameObjC::GetMessage((STSprGameObjC *)local_80,message);
  SVar5 = message->id;
  if (SVar5 < MESS_STOCTOPUSC_0112) {
    if (SVar5 == MESS_ID_ALLCREATE) {
      TVar7 = this_01->field_05AC;
      if (TVar7 - CASE_37 < 0x38) {
        switch(TVar7) {
        case CASE_37:
        case CASE_6C:
          thunk_FUN_004e8d40((AnonShape_004E8D40_DAF7916C *)this_01);
          break;
        case CASE_38:
        case CASE_39:
        case CASE_4F:
        case CASE_5E:
        case CASE_61:
          thunk_FUN_004e0220((AnonShape_004E0250_5A3B9236 *)this_01);
          break;
        case CASE_53:
          thunk_FUN_004cd790((AnonShape_004CD790_161F55D2 *)this_01);
          break;
        case CASE_54:
        case CASE_55:
        case CASE_56:
        case CASE_57:
        case CASE_58:
        case CASE_59:
        case CASE_5A:
          thunk_FUN_004ce6e0(this_01);
          break;
        case CASE_69:
          thunk_FUN_004dcbc0((AnonShape_004DCCF0_FF75E3FE *)this_01);
          break;
        case CASE_6A:
          thunk_FUN_004c5e30((AnonShape_004C5F30_84FC19DC *)this_01);
          break;
        case CASE_6E:
          thunk_FUN_004dd500((AnonShape_004DD500_8D93FB74 *)this_01,(uint)(&BYTE_004bd2b1)[TVar7]);
        }
      }
      if (*(int *)(&DAT_00794d94 + this_01->field_0235 * 4) == 0) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004c2e20((AnonShape_004C2C10_59B6D93C *)this_01);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (SVar5 < MESS_STSPRGAMEOBJC_0109) {
      if (SVar5 == MESS_SHARED_0108) {
        iVar37 = 0;
        iVar17 = 0;
        do {
          piVar43 = (int *)(&this_01->field_01F5->field_0x0 + iVar17);
          auStack_588[iVar37] = *(undefined4 *)(&this_01->field_01F5->field_0x1c + iVar17);
          aiStack_6dc[iVar37] = piVar43[8];
          if (*piVar43 != 0) {
            cVar42 = (char)iVar37;
            iVar25 = thunk_FUN_004ac910(&this_01->field_01D5,cVar42);
            aiStack_500[iVar37] = iVar25;
            iVar25 = thunk_FUN_004ac910(&this_01->field_01D5,cVar42);
            uVar26 = thunk_FUN_004acdd0(&this_01->field_01D5,cVar42,iVar25);
            auStack_698[iVar37] = uVar26;
          }
          iVar17 = iVar17 + 0x24;
          iVar37 = iVar37 + 1;
        } while (iVar17 < 0x264);
        if (this_01->field_05FF != (STT3DSprC *)0x0) {
          iVar37 = 0;
          iVar17 = 0;
          do {
            pSVar22 = this_01->field_05FF;
            pAVar6 = pSVar22->field_0020;
            piVar43 = (int *)(&pAVar6->field_0x0 + iVar17);
            auStack_610[iVar37] = *(undefined4 *)(&pAVar6->field_0x1c + iVar17);
            aiStack_544[iVar37] = piVar43[8];
            if (*piVar43 != 0) {
              cVar42 = (char)iVar37;
              iVar25 = thunk_FUN_004ac910(pSVar22,cVar42);
              pSVar22 = this_01->field_05FF;
              aiStack_5cc[iVar37] = iVar25;
              iVar25 = thunk_FUN_004ac910(pSVar22,cVar42);
              uVar26 = thunk_FUN_004acdd0(this_01->field_05FF,cVar42,iVar25);
              auStack_654[iVar37] = uVar26;
            }
            iVar17 = iVar17 + 0x24;
            iVar37 = iVar37 + 1;
          } while (iVar17 < 0x264);
        }
        RotateSpr(this_01,1);
        iVar37 = 0;
        iVar17 = 0;
        do {
          *(undefined4 *)(&this_01->field_01F5->field_0x1c + iVar17) = auStack_588[iVar37];
          *(int *)(&this_01->field_01F5->field_0x20 + iVar17) = aiStack_6dc[iVar37];
          piVar43 = (int *)(&this_01->field_01F5->field_0x0 + iVar17);
          iVar25 = *piVar43;
          if (iVar25 != 0) {
            *(undefined4 *)(piVar43[1] + aiStack_500[iVar37] * 4) =
                 *(undefined4 *)(aiStack_500[iVar37] * 4 + 0x31 + iVar25);
            uVar26 = auStack_698[iVar37];
            iVar25 = thunk_FUN_004ac910(&this_01->field_01D5,(char)iVar37);
            thunk_FUN_004ace00(&this_01->field_01D5,(char)iVar37,iVar25,uVar26);
          }
          iVar17 = iVar17 + 0x24;
          iVar37 = iVar37 + 1;
        } while (iVar17 < 0x264);
        if (this_01->field_05FF == (STT3DSprC *)0x0) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        iVar37 = 0;
        iVar17 = 0;
        do {
          *(undefined4 *)(&this_01->field_05FF->field_0020->field_0x1c + iVar17) =
               auStack_610[iVar37];
          *(int *)(&this_01->field_05FF->field_0020->field_0x20 + iVar17) = aiStack_544[iVar37];
          pAVar6 = this_01->field_05FF->field_0020;
          iVar25 = *(int *)(&pAVar6->field_0x0 + iVar17);
          if (iVar25 != 0) {
            *(undefined4 *)(*(int *)(&pAVar6->field_0x4 + iVar17) + aiStack_5cc[iVar37] * 4) =
                 *(undefined4 *)(aiStack_5cc[iVar37] * 4 + 0x31 + iVar25);
            uVar26 = auStack_654[iVar37];
            iVar25 = thunk_FUN_004ac910(this_01->field_05FF,(char)iVar37);
            thunk_FUN_004ace00(this_01->field_05FF,(char)iVar37,iVar25,uVar26);
          }
          iVar17 = iVar17 + 0x24;
          iVar37 = iVar37 + 1;
        } while (iVar17 < 0x264);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (SVar5 == MESS_ID_NONE) {
        if (this_01->field_04B4 != 0) {
          if ((this_01->field_0245 == CASE_0) && (*(int *)&this_01->field_0x361 == 0)) {
            bVar41 = true;
          }
          else {
            bVar41 = false;
          }
          if ((bVar41) && (this_01->field_0249 != 6)) {
            uVar18 = g_playSystem_00802A38->field_00E4;
            this_01->field_04BC = 1;
            this_01->field_04B8 = uVar18;
            this_01->vfunc_90(3,0x360);
            SetState(this_01,6,1);
            sub_004CC880(this_01,4);
          }
        }
        thunk_FUN_004cbad0((AnonShape_004CBAD0_DCDD6BA9 *)this_01);
        thunk_FUN_004b8c80(this_01);
        if (this_01->field_05FF != (STT3DSprC *)0x0) {
          thunk_FUN_004cbe10(this_01);
        }
        if (this_01->field_0245 == CASE_0) {
          if (this_01->field_0261 != 0) {
            fireProc(this_01);
          }
          thunk_FUN_004c84c0(this_01);
          switch(this_01->field_05AC) {
          case CASE_32:
          case CASE_40:
          case CASE_49:
          case CASE_5C:
            thunk_FUN_004cf410();
            break;
          case CASE_33:
            thunk_FUN_004e27e0(this_01);
            break;
          case CASE_34:
          case CASE_5B:
            thunk_FUN_004ddd50((int *)this_01);
            break;
          case CASE_36:
          case CASE_5D:
            thunk_FUN_004e4b10((AnonShape_004E4B10_C52B4B94 *)this_01);
            break;
          case CASE_37:
          case CASE_6C:
            thunk_FUN_004e9050(this_01);
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
            thunk_FUN_004e0830(this_01);
            break;
          case CASE_3A:
            thunk_FUN_004d9820((int *)this_01);
            break;
          case CASE_41:
            thunk_FUN_004e3910((int *)this_01);
            break;
          case CASE_43:
            thunk_FUN_004df3b0(this_01);
            break;
          case CASE_45:
            thunk_FUN_004ea870(this_01);
            break;
          case CASE_48:
            thunk_FUN_004dfb00((AnonShape_004DFB00_599AF150 *)this_01);
            break;
          case CASE_4C:
            thunk_FUN_004dc760(this_01);
            break;
          case CASE_4D:
            thunk_FUN_004dec10(this_01);
            break;
          case CASE_4E:
            thunk_FUN_004d9c60();
            break;
          case CASE_63:
            thunk_FUN_004b7aa0(this_01);
            break;
          case CASE_64:
            thunk_FUN_004e46f0((int *)this_01);
            break;
          case CASE_68:
            thunk_FUN_004dc260(this_01);
            break;
          case CASE_69:
            thunk_FUN_004dcbf0((AnonShape_004DCBF0_C6A0E7DA *)this_01);
            break;
          case CASE_6A:
            thunk_FUN_004c5eb0((AnonShape_004C5EB0_4D7D61A8 *)this_01);
            break;
          case CASE_6E:
            thunk_FUN_004dd570(this_01);
            break;
          case CASE_6F:
          case CASE_73:
            thunk_FUN_004eccf0((AnonShape_004ECC70_4D35D723 *)this_01);
            break;
          case CASE_70:
            thunk_FUN_004d8f80((AnonShape_004D8F80_1255A4D6 *)this_01);
            break;
          case CASE_72:
            thunk_FUN_004ece80();
          }
        }
        if (this_01->field_03DC != 0) {
          thunk_FUN_004c6d00((STJellyGunC *)this_01);
        }
        teleNone(this_01);
        if ((this_01->field_0410 != 0) &&
           (this_01->field_041C + this_01->field_0418 <= g_playSystem_00802A38->field_00E4)) {
          this_01->field_0410 = 0;
        }
        if ((this_01->field_0420 != 0) &&
           (this_01->field_0428 + this_01->field_0424 <= g_playSystem_00802A38->field_00E4)) {
          this_01->field_0420 = 0;
        }
        if (this_01->field_04A0 != 0) {
          iVar17 = this_01->vfunc_7C();
          if (iVar17 < 100) {
            if (this_01->field_04A4 + 0x7d <= g_playSystem_00802A38->field_00E4) {
              thunk_FUN_004b9bb0(this_01,(-(uint)(this_01->field_04A8 != 0) & 5) + 5,
                                 (ushort)this_01->field_04AC,0xffff);
              this_01->field_04A4 = g_playSystem_00802A38->field_00E4;
            }
          }
          else {
            this_01->field_04A0 = 0;
          }
        }
        thunk_FUN_004cc370((AnonShape_004CC370_02CE3D17 *)this_01);
        if (this_01->field_04C0 == 0) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        this_00 = this_01->field_061F;
        if (this_00 == (void *)0x0) {
          puVar23 = thunk_FUN_00631fd0();
          this_01->field_061F = puVar23;
          dVar24 = this_01->slot_2C();
          thunk_FUN_006324c0(this_01->field_061F,CASE_2,dVar24);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (this_01->field_002C == 0) {
          thunk_FUN_00636060(this_00,(int)this_01->field_0041,(int)this_01->field_0043,
                             this_01->field_0045 + 0x14,(int)this_01->field_006C,100);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        thunk_FUN_00636060(this_00,(this_01->field_05B0 + 1) * 0xc9,(this_01->field_05B4 + 1) * 0xc9
                           ,this_01->field_05B8 * 200 + 0x78,(int)this_01->field_006C,100);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (SVar5 == MESS_ID_CREATE) {
        dVar24 = (message->arg0).u32;
        if (this_01 == (TLOBaseTy *)0x0) {
          pTVar35 = (TLOBaseTy_field_05ACState *)0x0;
        }
        else {
          pTVar35 = &this_01->field_05AC;
        }
        pTVar31 = (TLOBaseTy_field_05ACState *)(dVar24 + 0x14);
        for (iVar17 = 0x10; iVar17 != 0; iVar17 = iVar17 + -1) {
          *pTVar35 = *pTVar31;
          pTVar31 = pTVar31 + 1;
          pTVar35 = pTVar35 + 1;
        }
        *(short *)pTVar35 = (short)*pTVar31;
        *(byte *)((int)pTVar35 + 2) = *(byte *)((int)pTVar31 + 2);
        this_01->field_0231 = *(TLOBaseTy_field_0231State *)(dVar24 + 0xc);
        this_01->field_0235 = this_01->field_05AC - CASE_32;
        uVar18 = GetPlayerRaceId(*(char *)&this_01->field_0024);
        this_01->field_0239 = (uVar18 & 0xff) - 1;
        this_01->field_023D = this_01->field_0024;
        if (*(int *)(&DAT_00791f38 + this_01->field_0235 * 4) == 2) {
          this_01->field_05FB = &DAT_007aca60;
        }
        else if (*(int *)(&DAT_00791f38 + this_01->field_0235 * 4) == 1) {
          this_01->field_05FB = &DAT_007ace00;
        }
        else {
          this_01->field_05FB = &DAT_007ac988;
        }
        this_01->field_04B4 = 0;
        this_01->field_04B0 = 0;
        this_01->field_0255 = *(undefined4 *)(&DAT_007914e8 + this_01->field_0235 * 4);
        this_01->field_0454 = 0;
        this_01->field_0458 = 0xff;
        if (this_01->field_002C == 0) {
          this_01->field_060B = 0xb4;
          this_01->field_060F = 0x8c;
          this_01->field_0613 = 0x5a;
          this_01->field_0617 = 0x45;
        }
        else if (this_01->field_002C == 1) {
          this_01->field_060B = 0xf0;
          this_01->field_060F = 0xbe;
          this_01->field_0613 = 0x78;
          this_01->field_0617 = 0x56;
        }
        else {
          this_01->field_0617 = 0xffffffff;
          this_01->field_0613 = 0xffffffff;
          this_01->field_060F = 0xffffffff;
          this_01->field_060B = 0xffffffff;
        }
        thunk_FUN_00417a00(this_01,0);
        iVar17 = thunk_FUN_00417a20(this_01,*(short *)&this_01->field_05B0,
                                    *(short *)&this_01->field_05B4,*(short *)&this_01->field_05B8,1)
        ;
        if (iVar17 != 0) {
          RaiseInternalException
                    (-5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_base.cpp",0x290)
          ;
        }
        thunk_FUN_0041d900(this_01,*(short *)&this_01->field_05B0,*(short *)&this_01->field_05B4,
                           *(short *)&this_01->field_05B8);
        thunk_FUN_004b9920((AnonShape_004B9920_1D6BF5BA *)this_01);
        switch(this_01->field_0231) {
        case CASE_0:
        case CASE_1:
        case CASE_3:
          if ((100 < this_01->field_05DB) || (this_01->field_05DB < 0)) {
            this_01->field_05DB = 100;
          }
          if ((100 < this_01->field_05D7) || (this_01->field_05D7 < 0)) {
            this_01->field_05D7 = 100;
          }
          uVar18 = GetPlayerRaceId(*(char *)&this_01->field_023D);
          this_01->field_0241 =
               (*(int *)(&DAT_007e4178 + ((uVar18 & 0xff) + this_01->field_0235 * 3) * 4) *
               this_01->field_05D7) / 100;
          this_01->field_0410 = 0;
          this_01->field_042C = 0;
          this_01->field_04A0 = 0;
          this_01->field_04C0 = 0;
          TVar7 = this_01->field_05AC;
          if ((((TVar7 != CASE_4D) || (this_01->field_04D0 == CASE_2)) &&
              ((TVar7 != CASE_4C || (this_01->field_04D0 == CASE_2)))) &&
             ((TVar7 != CASE_43 || (this_01->field_04D0 == CASE_2)))) {
            dVar24 = this_01->slot_2C();
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            thunk_FUN_004b76d0(CONCAT31((int3)(dVar24 >> 8),*(undefined1 *)&this_01->field_0024),
                               dVar24);
          }
          this_01->field_0259 = 0;
          thunk_FUN_004c3020((AnonShape_004C3020_45D93566 *)this_01);
          thunk_FUN_004c71f0((AnonShape_004C71F0_9DDD72E5 *)this_01);
          thunk_FUN_004c6b50(this_01);
          thunk_FUN_004cc220((AnonShape_004CC220_7DEF08C7 *)this_01);
          thunk_FUN_004cd390((int)this_01);
          thunk_FUN_004e9c00((int)this_01);
          switch(this_01->field_05AC) {
          case CASE_32:
          case CASE_40:
          case CASE_49:
          case CASE_5C:
            thunk_FUN_004ce700((int)this_01);
            break;
          case CASE_33:
            thunk_FUN_004e1e30((int)this_01);
            break;
          case CASE_34:
          case CASE_5B:
            thunk_FUN_004dd850((int)this_01);
            break;
          case CASE_36:
          case CASE_3D:
          case CASE_5D:
            thunk_FUN_004e4aa0((int *)this_01);
            break;
          case CASE_37:
          case CASE_6C:
            thunk_FUN_004e8cc0((AnonShape_004E8DC0_1D60A929 *)this_01);
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
            thunk_FUN_004e0040((AnonShape_004E0040_648F9827 *)this_01);
            break;
          case CASE_3A:
            thunk_FUN_004d9790((AnonShape_004D9790_FC54D6B0 *)this_01);
            break;
          case CASE_41:
            thunk_FUN_004e3880((AnonShape_004E3880_642C8E1A *)this_01);
            break;
          case CASE_43:
            thunk_FUN_004df2b0((AnonShape_004DC660_217FA9F0 *)this_01);
            break;
          case CASE_44:
            thunk_FUN_004de7b0((int)this_01);
            break;
          case CASE_45:
            thunk_FUN_004ea7a0((AnonShape_004EA7A0_0F37AD2F *)this_01);
            break;
          case CASE_48:
            thunk_FUN_004df8c0((int)this_01);
            break;
          case CASE_4C:
            thunk_FUN_004dc660((AnonShape_004DC660_217FA9F0 *)this_01);
            break;
          case CASE_4D:
            thunk_FUN_004deba0((int)this_01);
            break;
          case CASE_4E:
            thunk_FUN_004d9bb0((int)this_01);
            break;
          case CASE_50:
            thunk_FUN_004b6d20((int)this_01);
            break;
          case CASE_53:
            thunk_FUN_004cd6b0((AnonShape_004CD6B0_318BEA19 *)this_01);
            break;
          case CASE_54:
          case CASE_55:
          case CASE_56:
          case CASE_57:
          case CASE_58:
          case CASE_59:
          case CASE_5A:
            thunk_FUN_004ce640(this_01);
          case CASE_35:
            thunk_FUN_004e2a90((int)this_01);
            break;
          case CASE_63:
            thunk_FUN_004b7a60((int)this_01);
            break;
          case CASE_64:
            thunk_FUN_004e4630((AnonShape_004E4630_7FABCC3F *)this_01);
            break;
          case CASE_68:
            thunk_FUN_004dc1e0((AnonShape_004DC1E0_5260A589 *)this_01);
            break;
          case CASE_69:
            thunk_FUN_004dcb70((AnonShape_004DCB70_1032D92F *)this_01);
            break;
          case CASE_6A:
            thunk_FUN_004c5de0((AnonShape_004C5DE0_7F596C47 *)this_01);
            break;
          case CASE_6D:
            thunk_FUN_004dba20((AnonShape_004DBA20_8FF87D0F *)this_01);
            break;
          case CASE_6E:
            thunk_FUN_004dd460((AnonShape_004DD460_CCB31E51 *)this_01);
            break;
          case CASE_6F:
          case CASE_73:
            thunk_FUN_004ecc70((AnonShape_004ECC70_4D35D723 *)this_01);
            break;
          case CASE_70:
            thunk_FUN_004d8d00((AnonShape_004D8D00_A9D3F7D4 *)this_01);
            break;
          case CASE_72:
            thunk_FUN_004ecdd0((int)this_01);
          }
          if (-1 < this_01->field_05BC) {
            this_01->field_0030 = (short)this_01->field_05BC;
          }
          TLOEmbryoTy::sub_00419C70
                    ((int *)this_01,this_01->field_0231,(uint)(this_01->field_0231 == CASE_0));
          if (*(int *)(&DAT_00794d94 + this_01->field_0235 * 4) != 0) {
            thunk_FUN_004c2dd0((AnonShape_004C2DD0_4C038B03 *)this_01);
          }
          SetState(this_01,0,1);
          if (this_01->field_0245 == CASE_0) {
            iVar17 = this_01->field_01F5->field_020C;
            iVar37 = this_01->field_01F5->field_0208;
            if (iVar37 < iVar17) {
              uVar18 = this_01->field_001C * 0x41c64e6d + 0x3039;
              this_01->field_001C = uVar18;
              uVar18 = (uVar18 >> 0x10) % ((iVar17 - iVar37) + 1U) + iVar37;
              STT3DSprC::SetCurFase((STT3DSprC *)&this_01->field_01D5,'\x0e',uVar18);
              STT3DSprC::SetCurFase((STT3DSprC *)&this_01->field_01D5,'\r',uVar18);
            }
          }
          if ((*(int *)(&DAT_00792778 + this_01->field_0235 * 4) == 0) ||
             (iVar17 = thunk_FUN_004e81b0((int)this_01->field_0024,this_01->field_0235,0),
             iVar17 == 0)) {
            puVar19 = (undefined *)0x5;
          }
          else {
            puVar19 = (undefined *)
                      thunk_FUN_004e81b0((int)this_01->field_0024,this_01->field_0235,0);
          }
          TLOEmbryoTy::sub_0041C3F0((TLOEmbryoTy *)this_01,puVar19);
          if ((this_01->field_0231 == CASE_1) && (local_14 = 0, DAT_008117bc != (undefined4 *)0x0))
          {
            local_64 = *(undefined2 *)&this_01->field_0024;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_68 = CONCAT22(this_01->field_0032,local_64);
            local_6c = 0x5dd0;
            iVar17 = STPlaySystemC::sub_006E62D0
                               (g_playSystem_00802A38,
                                (AnonShape_005EFAE0_B406B78B *)this_01->field_05D3,&local_14);
            if ((iVar17 == 0) && (local_14 != 0)) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_62 = *(undefined2 *)(local_14 + 0x32);
            }
            else {
              local_62 = 0xffff;
            }
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)*DAT_008117bc)(local_7c);
          }
          uVar18 = GetPlayerRaceId(*(char *)&this_01->field_023D);
          if (this_01->field_0241 !=
              *(int *)(&DAT_007e4178 + ((uVar18 & 0xff) + this_01->field_0235 * 3) * 4)) {
            thunk_FUN_004cc840((int *)this_01);
          }
          if (this_01->field_0024 == (byte *)(uint)(byte)this_01->field_0010->field_112D) {
            thunk_FUN_004d8b70((char)this_01->field_0024);
          }
          if (((this_01->field_0231 == CASE_1) &&
              (this_01->field_0024 == (byte *)(uint)(byte)this_01->field_0010->field_112D)) &&
             (uVar18 = GetPlayerRaceId(*(char *)&this_01->field_023D),
             *(int *)(&DAT_007952b8 + ((uVar18 & 0xff) + this_01->field_0235 * 3) * 4) != 0)) {
            pTVar28 = this_01->vtable;
            uVar18 = GetPlayerRaceId(*(char *)&this_01->field_023D);
            (*pTVar28->vfunc_90)
                      (this_01,4,
                       *(undefined4 *)
                        (&DAT_007952b8 + ((uVar18 & 0xff) + this_01->field_0235 * 3) * 4));
          }
          if (((this_01->field_0231 == CASE_0) || (this_01->field_0231 == CASE_3)) &&
             (g_manBasis_00811784 != (STManBasisC *)0x0)) {
            uVar18 = GetPlayerRaceId(*(char *)&this_01->field_0024);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            thunk_FUN_005f23d0(g_manBasis_00811784,this_01->field_05B0,this_01->field_05B4,
                               this_01->field_05B8,
                               CONCAT31((int3)((uint)extraout_ECX >> 8),
                                        *(undefined1 *)&this_01->field_002C),this_01->field_05AC,
                               uVar18 & 0xff);
          }
          if (this_01->field_05DF != 0) {
            puVar23 = &this_01->field_01D5;
            this_01->field_04C8 = *(short *)(DAT_00806724 + 0x23) + -1;
            this_01->field_04CC = g_playSystem_00802A38->field_00E4;
            STT3DSprC::sub_004ACE60((STT3DSprC *)puVar23,'\x0e');
            STT3DSprC::sub_004ACE60((STT3DSprC *)puVar23,'\r');
            STT3DSprC::sub_004ACE60((STT3DSprC *)puVar23,'\f');
            STT3DSprC::sub_004ACE60((STT3DSprC *)puVar23,'\v');
            STT3DSprC::sub_004ACE60((STT3DSprC *)puVar23,'\t');
            STT3DSprC::sub_004ACE60((STT3DSprC *)puVar23,'\b');
            STT3DSprC::sub_004ACE60((STT3DSprC *)puVar23,'\a');
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            STT3DSprC::sub_004ACE30
                      ((STT3DSprC *)puVar23,*(uint *)(DAT_00806724 + 0x30 + this_01->field_04C8 * 4)
                       ,(int)*(short *)(DAT_00806724 + 0x2c));
            thunk_FUN_0041f630((AnonShape_0041F630_B1BEE81C *)this_01);
            sub_004CBA30(this_01);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          break;
        case CASE_2:
          local_c = (message->arg0).ptr;
          puVar23 = (undefined4 *)&local_c->field_0x57;
          puVar36 = (undefined4 *)
                    (-(uint)(this_01 != (TLOBaseTy *)0x0) & (uint)&this_01->field_0231);
          for (iVar17 = 0xde; iVar17 != 0; iVar17 = iVar17 + -1) {
            *puVar36 = *puVar23;
            puVar23 = puVar23 + 1;
            puVar36 = puVar36 + 1;
          }
          *(undefined2 *)puVar36 = *(undefined2 *)puVar23;
          *(undefined1 *)((int)puVar36 + 2) = *(undefined1 *)((int)puVar23 + 2);
          this_01->field_0231 = CASE_2;
          if (this_01->field_03D8 != 0) {
            pAVar20 = (AnonPointee_TLOBaseTy_0607 *)
                      Library::DKW::LIB::FUN_006aac70(this_01->field_03D8 * 0x27);
            this_01->field_0607 = pAVar20;
          }
          if (this_01->field_03D4 != 0) {
            uVar29 = this_01->field_03D4 * 0x27;
            puVar23 = (undefined4 *)(&local_c->field_0x0 + local_c->field_03D2);
            pAVar20 = this_01->field_0607;
            for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
              pAVar20->field_0000 = *puVar23;
              puVar23 = puVar23 + 1;
              pAVar20 = (AnonPointee_TLOBaseTy_0607 *)&pAVar20->field_0004;
            }
            for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
              *(undefined1 *)&pAVar20->field_0000 = *(undefined1 *)puVar23;
              puVar23 = (undefined4 *)((int)puVar23 + 1);
              pAVar20 = (AnonPointee_TLOBaseTy_0607 *)((int)&pAVar20->field_0000 + 1);
            }
          }
          sub_004C96E0(this_01);
          local_34 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x44);
          pAVar27 = local_c;
          local_28 = DAT_008073cc;
          local_30 = 0;
          local_1c = 0;
          local_24 = DAT_008032b8;
          local_20 = 0;
          local_34[1] = DAT_00806774;
          local_34[2] = DAT_00806774;
          *local_34 = DAT_00806774;
          local_34[0xf] = DAT_00806774;
          local_34[0x10] = DAT_0080678c;
          local_34[0xe] = DAT_0080678c;
          local_34[0xd] = DAT_0080678c;
          local_34[0xc] = DAT_0080678c;
          local_34[0xb] = DAT_0080678c;
          local_34[10] = 0;
          local_34[9] = DAT_0080678c;
          local_34[8] = DAT_0080678c;
          local_34[7] = DAT_0080678c;
          if (this_01->field_0245 == CASE_1) {
            if (this_01->field_05DF == 5) {
              local_30 = *(undefined4 *)(DAT_00806724 + 0x30 + this_01->field_04C8 * 4);
              local_2c = (int)*(short *)(DAT_00806724 + 0x2c);
            }
            else {
              local_34[5] = DAT_00806764;
              local_34[4] = DAT_00806774;
              local_34[6] = DAT_00806774;
            }
          }
          if (this_01->field_0245 == CASE_6) {
            local_34[5] = DAT_0080678c;
            local_34[4] = DAT_00806764;
          }
          STT3DSprC::RestoreSpr
                    ((STT3DSprC *)&this_01->field_01D5,(int *)&local_34,
                     (AnonShape_004AD790_77673787 *)(&local_c->field_0x0 + local_c->field_03DA));
          if ((this_01->field_05F7 != 0) && (*(int *)(&DAT_00790c2c + this_01->field_0235 * 4) != 0)
             ) {
            iVar17 = 1;
            uVar29 = 0xc;
            uVar18 = thunk_FUN_004ad650((STT3DSprC *)&this_01->field_01D5);
            FUN_006ea190((void *)this_01->field_0211,uVar18,uVar29,iVar17);
          }
          if (*(int *)&pAVar27->field_0x3de != 0) {
            pAVar21 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
            if (pAVar21 == (AnonShape_004AB810_8E5693D5 *)0x0) {
              pSVar22 = (STT3DSprC *)0x0;
            }
            else {
              pSVar22 = (STT3DSprC *)thunk_FUN_004ab810(pAVar21);
            }
            this_01->field_05FF = pSVar22;
            iVar17 = STT3DSprC::Init(pSVar22,DAT_008073cc,0x5a,0x45,(STDcResourcC *)0x0,0xb4,0x8c,
                                     0x11);
            if (iVar17 != 0) {
              RaiseInternalException
                        (iVar17,g_overwriteContext_007ED77C,
                         "E:\\__titans\\Artem\\TLO_base.cpp",0x365);
            }
            memset(local_34, 0, 0x44); /* compiler bulk-zero initialization */
            switch(this_01->field_05AC) {
            case CASE_32:
            case CASE_40:
            case CASE_49:
            case CASE_5C:
              local_34[0xe] = DAT_0080677c;
              local_34[0xc] = DAT_0080677c;
              local_34[0xd] = DAT_0080677c;
              break;
            case CASE_45:
            case CASE_4E:
            case CASE_52:
            case CASE_5F:
            case CASE_69:
            case CASE_70:
            case CASE_72:
              local_34[0xe] = DAT_00806774;
            }
            local_30 = 0;
            local_1c = 0;
            local_28 = 0;
            STT3DSprC::RestoreSpr
                      (this_01->field_05FF,(int *)&local_34,
                       (AnonShape_004AD790_77673787 *)(&local_c->field_0x0 + local_c->field_03E2));
            uVar29 = 10;
            iVar17 = thunk_FUN_004ad650((STT3DSprC *)&this_01->field_01D5);
            uVar18 = thunk_FUN_004ad650(this_01->field_05FF);
            FUN_006ea340((void *)this_01->field_0211,uVar18,iVar17,uVar29);
            pAVar27 = local_c;
          }
          if (*(int *)&pAVar27->field_0x3ee != 0) {
            pAVar21 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
            if (pAVar21 == (AnonShape_004AB810_8E5693D5 *)0x0) {
              pSVar22 = (STT3DSprC *)0x0;
            }
            else {
              pSVar22 = (STT3DSprC *)thunk_FUN_004ab810(pAVar21);
            }
            this_01->field_0603 = pSVar22;
            iVar17 = STT3DSprC::Init(pSVar22,DAT_008073cc,this_01->field_0613,this_01->field_0617,
                                     (STDcResourcC *)0x0,this_01->field_060B,this_01->field_060F,
                                     0x11);
            if (iVar17 != 0) {
              RaiseInternalException
                        (iVar17,g_overwriteContext_007ED77C,
                         "E:\\__titans\\Artem\\TLO_base.cpp",0x386);
            }
            memset(local_34, 0, 0x44); /* compiler bulk-zero initialization */
            if (this_01->field_043C == 1) {
              local_34[0xe] = DAT_00806764;
            }
            else {
              local_34[0xe] = DAT_0080678c;
            }
            local_30 = 0;
            local_1c = 0;
            local_28 = 0;
            STT3DSprC::RestoreSpr
                      (this_01->field_0603,(int *)&local_34,
                       (AnonShape_004AD790_77673787 *)(&local_c->field_0x0 + local_c->field_03F2));
            if (((this_01->field_0444 != 0) && (this_01->field_0448 != 0)) &&
               (-1 < this_01->field_044C)) {
              STT3DSprC::UnLoadSequence((STT3DSprC *)&this_01->field_01D5,6);
              uVar29 = 6;
              iVar17 = thunk_FUN_004ad650((STT3DSprC *)&this_01->field_01D5);
              uVar18 = thunk_FUN_004ad650(this_01->field_0603);
              FUN_006ea340((void *)this_01->field_0211,uVar18,iVar17,uVar29);
            }
          }
          FreeAndNull(&local_34);
          if ((this_01->field_046C == CASE_4) && (this_01->field_0490 != 0)) {
            iVar17 = 0;
            uVar18 = thunk_FUN_004ad650((STT3DSprC *)&this_01->field_01D5);
            FUN_006eabf0((void *)this_01->field_0211,uVar18,iVar17);
            if (this_01->field_05FF != (STT3DSprC *)0x0) {
              iVar17 = 0;
              uVar18 = thunk_FUN_004ad650(this_01->field_05FF);
              FUN_006eabf0((void *)this_01->field_0211,uVar18,iVar17);
            }
            if (this_01->field_0603 != (STT3DSprC *)0x0) {
              iVar17 = 0;
              uVar18 = thunk_FUN_004ad650(this_01->field_0603);
              FUN_006eabf0((void *)this_01->field_0211,uVar18,iVar17);
            }
          }
          STAllPlayersC::RestoreGObjData
                    ((STAllPlayersC *)this_01,
                     (undefined4 *)(&local_c->field_0x0 + local_c->field_03EA));
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar26 = CONCAT22(extraout_var,this_01->field_0032);
          TLOEmbryoTy::sub_00419CF0((int *)this_01,uVar26,uVar26);
          if (this_01->field_0251 != 0) {
            local_8 = (byte *)this_01->field_05B4;
            iVar17 = 2 - (uint)(*(int *)(&DAT_00791e30 + this_01->field_0235 * 4) != 1);
            if ((int)local_8 < (int)(local_8 + iVar17)) {
              do {
                iVar37 = this_01->field_05B0;
                if (iVar37 < iVar37 + iVar17) {
                  do {
                    iVar25 = thunk_FUN_004960d0((short)iVar37,(short)local_8,
                                                *(short *)&this_01->field_05B8);
                    if (iVar25 != 0) {
                      RaiseInternalException
                                (-5,g_overwriteContext_007ED77C,
                                 "E:\\__titans\\Artem\\TLO_base.cpp",0x3a5);
                    }
                    iVar37 = iVar37 + 1;
                  } while (iVar37 < this_01->field_05B0 + iVar17);
                }
                local_8 = local_8 + 1;
              } while ((int)local_8 < this_01->field_05B4 + iVar17);
              thunk_FUN_0041f630((AnonShape_0041F630_B1BEE81C *)this_01);
              sub_004CBA30(this_01);
              g_currentExceptionFrame = local_c4.previous;
              return 0;
            }
          }
          break;
        default:
          iVar17 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_base.cpp",0x3ac,0,0,
                                      "%s","I don't now what I suppose to do !");
          if (iVar17 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
        }
        thunk_FUN_0041f630((AnonShape_0041F630_B1BEE81C *)this_01);
        sub_004CBA30(this_01);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (SVar5 != MESS_SHARED_0003) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      sub_004B9A40(this_01);
      sub_00419D30(this_01,this_01->field_0458);
      sub_0041D590(this_01);
      sub_00417D30(this_01);
      thunk_FUN_004c3480();
      sub_004167A0(this_01);
      thunk_FUN_004c7230((int)this_01);
      sub_004CC330(this_01);
      thunk_FUN_004cd3b0((AnonShape_004CC900_31EE9CAA *)this_01);
      sub_004DC150(this_01);
      if (*(int *)(&DAT_00791a10 + this_01->field_0235 * 4) != 0) {
        sub_004CBF30(this_01);
      }
      thunk_FUN_004ad310((STT3DSprC *)&this_01->field_01D5);
      if (this_01->field_0024 != (byte *)(uint)(byte)this_01->field_0010->field_112D) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004d8b70((char)this_01->field_0024);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (SVar5 == MESS_SHARED_010F) {
      uVar26 = this_01->field_002C;
      ppbVar33 = local_4bc;
      for (iVar17 = 0xfd; iVar17 != 0; iVar17 = iVar17 + -1) {
        *ppbVar33 = (byte *)0x0;
        ppbVar33 = ppbVar33 + 1;
      }
      pbVar34 = this_01->field_0024;
      pTVar35 = (TLOBaseTy_field_05ACState *)0x0;
      *(undefined2 *)ppbVar33 = 0;
      local_40 = (byte *)0x0;
      local_3c = (byte *)0x0;
      local_8 = (byte *)0x0;
      local_10 = (byte *)0x0;
      local_38 = (byte *)0x0;
      local_4bc[3] = (byte *)0x2;
      local_4bc[2] = (byte *)0x1;
      local_4bc[0] = (byte *)0x3e8;
      if (this_01 != (TLOBaseTy *)0x0) {
        pTVar35 = &this_01->field_05AC;
      }
      pTVar31 = &local_4a8;
      for (iVar17 = 0x10; iVar17 != 0; iVar17 = iVar17 + -1) {
        *pTVar31 = *pTVar35;
        pTVar35 = pTVar35 + 1;
        pTVar31 = pTVar31 + 1;
      }
      *(short *)pTVar31 = (short)*pTVar35;
      *(byte *)((int)pTVar31 + 2) = *(byte *)((int)pTVar35 + 2);
      if (this_01 == (TLOBaseTy *)0x0) {
        pTVar32 = (TLOBaseTy_field_0231State *)0x0;
      }
      else {
        pTVar32 = &this_01->field_0231;
      }
      pTVar39 = &local_465;
      for (iVar17 = 0xde; iVar17 != 0; iVar17 = iVar17 + -1) {
        *pTVar39 = *pTVar32;
        pTVar32 = pTVar32 + 1;
        pTVar39 = pTVar39 + 1;
      }
      *(short *)pTVar39 = (short)*pTVar32;
      *(byte *)((int)pTVar39 + 2) = *(byte *)((int)pTVar32 + 2);
      local_ea = 0x3f6;
      local_4bc[1] = pbVar34;
      local_4bc[4] = (byte *)uVar26;
      local_40 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_01->field_01D5,&local_e6);
      local_e2 = this_01->field_03D4 * 0x27 + local_ea;
      if ((*(int *)(&DAT_00791a10 + this_01->field_0235 * 4) != 0) &&
         (this_01->field_05FF != (STT3DSprC *)0x0)) {
        local_3c = (byte *)STT3DSprC::SaveSpr(this_01->field_05FF,&local_de);
      }
      local_da = local_e6 + local_e2;
      local_38 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_01,(int *)&local_d6);
      local_d2 = local_de + local_da;
      if (this_01->field_0603 != (STT3DSprC *)0x0) {
        local_8 = (byte *)STT3DSprC::SaveSpr(this_01->field_0603,&local_ce);
        local_ca = local_d6 + local_d2;
      }
      local_18 = (AnonShape_0060EA30_DCEB68AD *)
                 ((this_01->field_03D4 + 0x1a) * 0x27 + local_ce + local_d6 + local_de + local_e6);
      local_10 = (byte *)Library::DKW::LIB::FUN_006aac10((uint)local_18);
      ppbVar33 = local_4bc;
      pbVar34 = local_10;
      for (iVar17 = 0xfd; iVar17 != 0; iVar17 = iVar17 + -1) {
        *(byte **)pbVar34 = *ppbVar33;
        ppbVar33 = ppbVar33 + 1;
        pbVar34 = pbVar34 + 4;
      }
      *(undefined2 *)pbVar34 = *(undefined2 *)ppbVar33;
      uVar29 = this_01->field_03D4 * 0x27;
      pAVar20 = this_01->field_0607;
      pbVar34 = local_10 + local_ea;
      for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pbVar34 = pAVar20->field_0000;
        pAVar20 = (AnonPointee_TLOBaseTy_0607 *)&pAVar20->field_0004;
        pbVar34 = pbVar34 + 4;
      }
      for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
        *pbVar34 = *(byte *)&pAVar20->field_0000;
        pAVar20 = (AnonPointee_TLOBaseTy_0607 *)((int)&pAVar20->field_0000 + 1);
        pbVar34 = pbVar34 + 1;
      }
      pbVar34 = local_40;
      pbVar40 = local_10 + local_e2;
      for (uVar18 = local_e6 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pbVar40 = *(undefined4 *)pbVar34;
        pbVar34 = pbVar34 + 4;
        pbVar40 = pbVar40 + 4;
      }
      for (local_e6 = local_e6 & 3; local_e6 != 0; local_e6 = local_e6 - 1) {
        *pbVar40 = *pbVar34;
        pbVar34 = pbVar34 + 1;
        pbVar40 = pbVar40 + 1;
      }
      if (local_de != 0) {
        pbVar34 = local_3c;
        pbVar40 = local_10 + local_da;
        for (uVar18 = local_de >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pbVar40 = *(undefined4 *)pbVar34;
          pbVar34 = pbVar34 + 4;
          pbVar40 = pbVar40 + 4;
        }
        for (local_de = local_de & 3; local_de != 0; local_de = local_de - 1) {
          *pbVar40 = *pbVar34;
          pbVar34 = pbVar34 + 1;
          pbVar40 = pbVar40 + 1;
        }
      }
      pbVar34 = local_38;
      pbVar40 = local_10 + local_d2;
      for (uVar18 = local_d6 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pbVar40 = *(undefined4 *)pbVar34;
        pbVar34 = pbVar34 + 4;
        pbVar40 = pbVar40 + 4;
      }
      for (local_d6 = local_d6 & 3; local_d6 != 0; local_d6 = local_d6 - 1) {
        *pbVar40 = *pbVar34;
        pbVar34 = pbVar34 + 1;
        pbVar40 = pbVar40 + 1;
      }
      pbVar34 = local_8;
      pbVar40 = local_10 + local_ca;
      for (uVar18 = local_ce >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pbVar40 = *(undefined4 *)pbVar34;
        pbVar34 = pbVar34 + 4;
        pbVar40 = pbVar40 + 4;
      }
      for (local_ce = local_ce & 3; local_ce != 0; local_ce = local_ce - 1) {
        *pbVar40 = *pbVar34;
        pbVar34 = pbVar34 + 1;
        pbVar40 = pbVar40 + 1;
      }
      STPlaySystemC::SaveObjData(g_playSystem_00802A38,this_01->field_0018,local_10,local_18);
      if (local_40 != (byte *)0x0) {
        FreeAndNull(&local_40);
      }
      if (local_3c != (byte *)0x0) {
        FreeAndNull(&local_3c);
      }
      if (local_10 != (byte *)0x0) {
        FreeAndNull(&local_10);
      }
      if (local_38 != (byte *)0x0) {
        FreeAndNull(&local_38);
      }
      if (local_8 == (byte *)0x0) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      FreeAndNull(&local_8);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (SVar5 != MESS_TORPHIT) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    piVar43 = (message->arg0).ptr;
    piVar38 = local_5c;
    for (iVar17 = 7; iVar17 != 0; iVar17 = iVar17 + -1) {
      *piVar38 = *piVar43;
      piVar43 = piVar43 + 1;
      piVar38 = piVar38 + 1;
    }
    iVar17 = 0;
    if ((0x9a < local_5c[1]) &&
       (((local_5c[1] < 0x9f || (local_5c[1] == 0xa5)) &&
        (iVar37 = thunk_FUN_004e60d0((int)this_01->field_0024,0x68), iVar37 != 0)))) {
      thunk_FUN_004d6eb0(this_01,local_5c[0] / 2);
    }
    if (this_01->field_05AC == CASE_68) {
      thunk_FUN_004dc240();
    }
    pAVar27 = local_c;
    if (local_5c[1] == 0x9a) {
      pAVar27 = (AnonShape_004B9FA0_0EE05DAC *)thunk_FUN_004e60d0(local_54,0x93);
      if ((this_01->field_04A0 == 0) || (this_01->field_04A8 < (int)pAVar27)) {
        this_01->field_04A8 = (int)pAVar27;
        this_01->field_04AC = local_54;
      }
      this_01->field_04A0 = 1;
      this_01->field_04A4 = g_playSystem_00802A38->field_00E4;
      local_c = pAVar27;
      this_01->vfunc_C8(0);
    }
    if (this_01->field_0410 != 0) {
      local_5c[0] = (this_01->field_0414 * local_5c[0]) / 100;
    }
    if (this_01->field_04C0 != 0) {
      local_5c[0] = (this_01->field_04C0 * local_5c[0] * 0x32) / 10000;
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
        pAVar27 = (AnonShape_004B9FA0_0EE05DAC *)thunk_FUN_004e60d0((int)this_01->field_0024,0x67);
        iVar17 = 0;
        if (pAVar27 == (AnonShape_004B9FA0_0EE05DAC *)((int)&puRam00000000 + 1)) {
          iVar17 = (local_5c[0] * 9) / 10 + (local_5c[0] * 9 >> 0x1f);
LAB_004bb547:
          iVar17 = local_5c[0] - (iVar17 - (iVar17 >> 0x1f));
        }
        else {
          if (pAVar27 == (AnonShape_004B9FA0_0EE05DAC *)((int)&puRam00000000 + 2)) {
            iVar17 = (local_5c[0] * 0x11) / 0x14 + (local_5c[0] * 0x11 >> 0x1f);
            goto LAB_004bb547;
          }
          if (pAVar27 == (AnonShape_004B9FA0_0EE05DAC *)((int)&puRam00000000 + 3)) {
            iVar17 = (local_5c[0] * 4) / 5 + (local_5c[0] * 4 >> 0x1f);
            goto LAB_004bb547;
          }
        }
        local_5c[0] = local_5c[0] - iVar17;
        local_c = pAVar27;
      }
      uVar18 = GetPlayerRaceId(*(char *)&this_01->field_0024);
      uVar18 = uVar18 & 0xff;
      if (uVar18 == 1) {
        pbVar34 = this_01->field_0024;
        iVar17 = 4;
LAB_004bb58d:
        pAVar27 = (AnonShape_004B9FA0_0EE05DAC *)thunk_FUN_004e60d0((int)pbVar34,iVar17);
        local_c = pAVar27;
      }
      else {
        if (uVar18 == 2) {
          pbVar34 = this_01->field_0024;
          iVar17 = 0x81;
          goto LAB_004bb58d;
        }
        if (uVar18 == 3) {
          pbVar34 = this_01->field_0024;
          iVar17 = 0x65;
          goto LAB_004bb58d;
        }
      }
      iVar17 = 0;
      if (pAVar27 == (AnonShape_004B9FA0_0EE05DAC *)((int)&puRam00000000 + 1)) {
        iVar17 = local_5c[0] * 8;
      }
      else if (pAVar27 == (AnonShape_004B9FA0_0EE05DAC *)((int)&puRam00000000 + 2)) {
        iVar17 = local_5c[0] * 6;
      }
      else {
        if (pAVar27 != (AnonShape_004B9FA0_0EE05DAC *)((int)&puRam00000000 + 3)) goto LAB_004bb5dd;
        iVar17 = local_5c[0] * 4;
      }
      iVar17 = local_5c[0] - iVar17 / 10;
      goto LAB_004bb5dd;
    }
    uVar18 = GetPlayerRaceId(*(char *)&this_01->field_0024);
    uVar18 = uVar18 & 0xff;
    if (uVar18 == 1) {
      pbVar34 = this_01->field_0024;
      iVar37 = 0x2d;
LAB_004bb4a1:
      pAVar27 = (AnonShape_004B9FA0_0EE05DAC *)thunk_FUN_004e60d0((int)pbVar34,iVar37);
      local_c = pAVar27;
    }
    else {
      if (uVar18 == 2) {
        pbVar34 = this_01->field_0024;
        iVar37 = 0x2d;
        goto LAB_004bb4a1;
      }
      if (uVar18 == 3) {
        pbVar34 = this_01->field_0024;
        iVar37 = 0x6a;
        goto LAB_004bb4a1;
      }
    }
    if (pAVar27 == (AnonShape_004B9FA0_0EE05DAC *)((int)&puRam00000000 + 1)) {
      iVar17 = local_5c[0] - (local_5c[0] * 9) / 10;
    }
    local_5c[0] = local_5c[0] - iVar17;
LAB_004bb5dd:
    if (200 < iVar17) {
      iVar17 = 200;
    }
    local_5c[0] = local_5c[0] - iVar17;
    if (local_5c[0] < 0) {
      local_5c[0] = 0;
    }
    thunk_FUN_004b9bb0(this_01,local_5c[0],(ushort)local_54,local_50);
    if (this_01->field_0245 == CASE_1) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((DAT_008117bc != (undefined4 *)0x0) && (local_5c[0] != 0)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_68 = CONCAT22(this_01->field_0032,*(undefined2 *)&this_01->field_0024);
      local_62 = local_50;
      local_6c = 0x5dd5;
      local_64 = (undefined2)local_54;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*DAT_008117bc)(local_7c);
    }
    if (DAT_00811798 != (void *)0x0) {
      thunk_FUN_0061f8b0(DAT_00811798,this_01->field_05B0,this_01->field_05B4,
                         (uint)this_01->field_0024);
    }
    this_01->field_0454 = g_playSystem_00802A38->field_00E4;
    if (this_01->field_0458 == 0xfe) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    this_01->field_0458 = local_54;
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  }
  if (SVar5 < MESS_SHARED_0129) {
    if (SVar5 == MESS_HITKILL) {
      TVar9 = this_01->field_0245;
      piVar43 = (message->arg0).ptr;
      piVar38 = local_5c;
      for (iVar17 = 7; iVar17 != 0; iVar17 = iVar17 + -1) {
        *piVar38 = *piVar43;
        piVar43 = piVar43 + 1;
        piVar38 = piVar38 + 1;
      }
      if ((TVar9 != CASE_1) && (TVar9 != CASE_6)) {
        this_01->field_0241 = 0;
        this_01->field_05D7 = 0;
        this_01->field_05DF = local_44;
        if ((local_44 == 2) || (local_44 == 5)) {
          iVar17 = 1;
        }
        else {
          iVar17 = 0;
        }
        SetState(this_01,1,iVar17);
        if ((this_01->field_05DF == 0) || (this_01->field_05DF == 4)) {
          uVar29 = (uint)(this_01->field_024D == 4);
          uVar18 = GetPlayerRaceId(*(char *)&this_01->field_0024);
          thunk_FUN_0062b830((int)this_01->field_0041,(int)this_01->field_0043,
                             (int)this_01->field_0045,this_01->field_05AC,(int *)this_01,0xffffffff,
                             0xffffffff,uVar18 & 0xff,uVar29);
        }
        if ((this_01->field_05DF == 2) || (this_01->field_05DF == 5)) {
          this_01->field_0454 = g_playSystem_00802A38->field_00E4;
          if (this_01->field_0458 != 0xfe) {
            this_01->field_0458 = local_54;
          }
        }
        else {
          if ((local_54 != 0xfe) && (DAT_008117bc != (undefined4 *)0x0)) {
            local_62 = local_50;
            local_6c = 0x5dd1;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_68 = CONCAT22(this_01->field_0032,*(undefined2 *)&this_01->field_0024);
            local_64 = (short)local_54;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)*DAT_008117bc)(local_7c);
          }
          local_68 = this_01->field_0008;
          local_74 = this_01->field_000C->systemId;
          local_70 = 0;
          local_6c = 10;
          sub_006E60A0(this_01,local_7c);
        }
      }
      if (DAT_008117bc == (undefined4 *)0x0) {
        local_6c = 0x5dd5;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_68 = CONCAT22(this_01->field_0032,*(undefined2 *)&this_01->field_0024);
        local_62 = 0xffff;
        local_64 = (short)local_54;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)*puRam00000000)(local_7c);
      }
      if (DAT_00811798 != (void *)0x0) {
        thunk_FUN_0061f8b0(DAT_00811798,this_01->field_05B0,this_01->field_05B4,
                           (uint)this_01->field_0024);
      }
      this_01->field_0454 = g_playSystem_00802A38->field_00E4;
      if (this_01->field_0458 == 0xfe) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      this_01->field_0458 = local_54;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (SVar5 != MESS_SHARED_0121) {
      if (SVar5 == MESS_SHARED_0122) {
        piVar43 = (message->arg0).ptr;
        if ((byte *)*piVar43 != this_01->field_0024) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        this_01->field_0410 = 1;
        this_01->field_0414 = piVar43[2];
        this_01->field_0418 = g_playSystem_00802A38->field_00E4;
        this_01->field_041C = piVar43[1];
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (SVar5 != MESS_TLOBASETY_0123) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (this_01->field_05AC == CASE_4D) {
        thunk_FUN_004debd0(this_01,(message->arg0).i32);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (this_01->field_05AC != CASE_73) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      TVar8 = (message->arg0).i32;
      this_01->field_04D0 = TVar8;
      if ((int)TVar8 < 0) {
        this_01->field_04D0 = CASE_0;
      }
      if (5000 < (int)this_01->field_04D0) {
        this_01->field_04D0 = 5000;
      }
      this_01->field_04D4 = g_playSystem_00802A38->field_00E4;
      if (this_01->field_05AC != CASE_73) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (this_01->field_04D0 != CASE_0) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004c2d40((AnonShape_004C2D40_7C578146 *)this_01);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    local_18 = (message->arg0).ptr;
    if ((7 < *(uint *)local_18) ||
       ((g_playSystem_00802A38 != (STPlaySystemC *)0x0 &&
        (7 < (byte)(&DAT_008087e9)[*(uint *)local_18 * 0x51])))) goto LAB_004bbcb2;
    bVar1 = *(byte *)local_18;
    bVar2 = *(byte *)&this_01->field_0024;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_14 = CONCAT31(local_14._1_3_,bVar1);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = (byte *)CONCAT31(local_8._1_3_,bVar2);
    if (DAT_00808a8f == '\0') {
      if (bVar1 == bVar2) {
LAB_004bbc2b:
        iVar17 = 0;
      }
      else {
        bVar3 = g_playerRelationMatrix[bVar1][bVar2];
        if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
          iVar17 = -2;
        }
        else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
          iVar17 = -1;
        }
        else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
          iVar17 = 1;
        }
        else {
          if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_004bbc2b;
          iVar17 = 2;
        }
      }
      bVar41 = iVar17 < 0;
    }
    else {
      bVar41 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
    }
    if ((bVar41) && (iVar17 = FUN_006b0fd0(0x800f90), iVar17 != 0)) {
      this_01->field_0420 = 1;
      this_01->field_0265 = this_01->field_0265 & 0xfffffffd;
      this_01->field_026D = 0;
      this_01->field_0424 = g_playSystem_00802A38->field_00E4;
      this_01->field_0428 = *(uint *)&local_18->field_0x4;
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
    sub_004CBA30(this_01);
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  }
  dVar24 = (message->arg0).u32;
  bVar1 = *(byte *)(dVar24 + 0xe);
  switch(bVar1) {
  case 8:
    if ((this_01->field_0245 == CASE_4) && (this_01->field_03DC != 0)) {
      if (this_01->field_0249 != -1) {
        this_01->field_0249 = 0xffffffff;
      }
      iVar17 = sub_004EA620(this_01);
      if (iVar17 != 0) {
        this_01->field_03FC = 1;
        this_01->field_0400 = 0;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    break;
  case 9:
    TVar7 = this_01->field_05AC;
    if (TVar7 == CASE_33) {
      bVar1 = **(byte **)(dVar24 + 0x17);
      if ((bVar1 != 0) && (bVar1 != 1)) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004e2190(this_01,(int *)(uint)bVar1);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((TVar7 != CASE_3C) && (TVar7 != CASE_53)) {
      thunk_FUN_004c91a0(this_01);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (this_01->field_0024 == (byte *)this_01->field_023D) {
LAB_004bc117:
      bVar41 = true;
    }
    else {
      uVar18 = GetPlayerRaceId((char)(byte *)this_01->field_023D);
      iVar17 = this_01->field_0235;
      uVar29 = GetPlayerRaceId(*(char *)&this_01->field_0024);
      if ((&DAT_007e1984)[(uVar29 & 0xff) + (iVar17 * 3 + (uVar18 & 0xff)) * 3] != '\0')
      goto LAB_004bc117;
      bVar41 = false;
    }
    if (bVar41) {
      thunk_FUN_004db0a0((int)this_01->field_0024);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x14:
    iVar37 = **(int **)(dVar24 + 0x17);
    if (iVar37 < 0) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (g_worldGrid.sizeX <= iVar37) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    iVar17 = (*(int **)(dVar24 + 0x17))[1];
    if (iVar17 < 0) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (g_worldGrid.sizeY <= iVar17) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    switch(this_01->field_05AC) {
    case CASE_32:
    case CASE_33:
    case CASE_37:
    case CASE_40:
    case CASE_49:
    case CASE_5C:
    case CASE_6C:
      this_01->field_042C = 1;
      this_01->field_0430 = **(undefined4 **)(dVar24 + 0x17);
      this_01->field_0434 = *(undefined4 *)(*(int *)(dVar24 + 0x17) + 4);
      this_01->field_0438 = 2;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (this_01->field_0245 != CASE_4) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    iVar25 = this_01->field_05B8;
    goto LAB_004bc4c0;
  case 0x15:
    if (this_01->field_0245 != CASE_4) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (g_worldGrid.sizeX <= (short)(ushort)**(byte **)(dVar24 + 0x17)) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    iVar17 = this_01->field_05B4;
    iVar25 = 4 - (uint)**(byte **)(dVar24 + 0x17);
    iVar37 = this_01->field_05B0;
LAB_004bc4c0:
    sub_004C6C70(this_01,iVar37,iVar17,iVar25);
    if (this_01->field_0249 != -1) {
      this_01->field_0249 = 0xffffffff;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x16:
    pcVar13 = *(char **)(dVar24 + 0x17);
    if (*(int *)(&DAT_00792778 + this_01->field_0235 * 4) != 0) {
      if (*pcVar13 == '\a') {
        this_01->field_0265 = this_01->field_0265 & 0xfffffffd;
        this_01->field_026D = 0;
      }
      else if (this_01->field_0261 != 0) {
        if (*(int *)(&DAT_00792a90 + this_01->field_0235 * 8) == 1) {
          if (*pcVar13 == '\0') {
            uVar26 = *(undefined4 *)(pcVar13 + 1);
            this_01->field_0265 = this_01->field_0265 | 2;
            this_01->field_026D = uVar26;
          }
        }
        else if ((((*(int *)(&DAT_00792a90 + this_01->field_0235 * 8) == 2) &&
                  (bVar1 = pcVar13[5], (short)(ushort)bVar1 < g_worldGrid.sizeX)) &&
                 (bVar2 = pcVar13[6], (short)(ushort)bVar2 < g_worldGrid.sizeY)) &&
                (bVar3 = pcVar13[7], (short)(ushort)bVar3 < g_worldGrid.sizeX)) {
          if (this_01->field_05AC == CASE_70) {
            thunk_FUN_004d8e70(this_01,(uint)bVar1,(uint)bVar2,(uint)bVar3);
          }
          else {
            this_01->field_0265 = this_01->field_0265 | 2;
            *(uint *)&this_01->field_0x2a5 = (uint)bVar1;
            this_01->field_02A9 = (uint)bVar2;
            *(uint *)&this_01->field_0x2ad = (uint)bVar3;
          }
        }
      }
      if (this_01->field_0024 == (byte *)(uint)(byte)this_01->field_0010->field_112D) {
        TVar7 = this_01->field_05AC;
        if (TVar7 == CASE_3E) {
          this_01->vfunc_90(4,0x23f);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_3F) {
          this_01->vfunc_90(4,0x248);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_51) {
          this_01->vfunc_90(4,0x28a);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_46) {
          this_01->vfunc_90(4,0x305);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_47) {
          this_01->vfunc_90(4,0x30e);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_4A) {
          this_01->vfunc_90(4,0x324);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_4B) {
          this_01->vfunc_90(4,0x32d);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_66) {
          this_01->vfunc_90(4,0x3dc);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_67) {
          this_01->vfunc_90(4,0x3e3);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_6B) {
          this_01->vfunc_90(4,0x3fe);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_70) {
          this_01->vfunc_90(4,0x419);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_71) {
          this_01->vfunc_90(4,0x420);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
      }
    }
    break;
  case 0x17:
    pcVar13 = *(char **)(dVar24 + 0x17);
    TVar7 = this_01->field_05AC;
    if (TVar7 == CASE_4C) {
      cVar42 = *pcVar13;
      if (cVar42 == '\x06') {
        this_01->field_04E0[0] = 1;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar42 == '\a') {
        this_01->field_04E0[0] = 0;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar42 != '\b') {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      TVar8 = this_01->field_04D0;
      if (TVar8 != CASE_0) {
        if (TVar8 == CASE_1) {
          this_01->field_04D4 = 2;
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
          iVar17 = thunk_FUN_004e60d0((int)this_01->field_0024,
                                      *(int *)(&DAT_00798fb0 + this_01->field_0239 * 4));
          if (iVar17 != 0) {
            thunk_FUN_004e4e90(this_01,*(int *)(pcVar13 + 1),*(int *)(pcVar13 + 5));
          }
          if (this_01->field_0024 != (byte *)(uint)(byte)this_01->field_0010->field_112D) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          uVar18 = GetPlayerRaceId(*(char *)&this_01->field_023D);
          uVar18 = uVar18 & 0xff;
          if (uVar18 == 1) {
            this_01->vfunc_90(4,0x210);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (uVar18 != 2) {
            if (uVar18 != 3) {
              g_currentExceptionFrame = local_c4.previous;
              return 0;
            }
            this_01->vfunc_90(4,0x39f);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          this_01->vfunc_90(4,0x2d8);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if ((TVar7 == CASE_3C) || (TVar7 == CASE_53)) {
          if (*pcVar13 == '\f') {
            if (g_playerRuntime[(int)this_01->field_0024].field2180_0xa0e != 0) {
              g_currentExceptionFrame = local_c4.previous;
              return 0;
            }
            uVar18 = this_01->field_001C * 0x41c64e6d + 0x3039;
            this_01->field_001C = uVar18;
            thunk_FUN_004db020((int)this_01->field_0024,uVar18 >> 0x10);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (*pcVar13 != '\r') {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          thunk_FUN_004db0f0((int)this_01->field_0024);
          if (this_01->field_0024 != (byte *)(uint)(byte)this_01->field_0010->field_112D) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (g_infocPanel_00801698 == (InfocPanelTy *)0x0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)g_infocPanel_00801698->field_0000->field_001C)(1);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 == CASE_70) {
          if (*pcVar13 != '\x12') {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (this_01->field_04E0[4] != 0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if ((int)this_01->field_04E0[3] < 100) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          this_01->field_04D0 = CASE_1;
          this_01->field_0261 = 1;
          this_01->field_0265 = this_01->field_0265 | 2;
          *(undefined4 *)&this_01->field_0x2a5 = 0xffffffff;
          this_01->field_02A9 = 0xffffffff;
          *(undefined4 *)&this_01->field_0x2ad = 0xffffffff;
          this_01->field_04E0[3] = 0;
          this_01->field_04D8 = g_playSystem_00802A38->field_00E4;
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (TVar7 != CASE_6D) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (*pcVar13 == '\x19') {
          iVar17 = STPlaySystemC::sub_006E62D0
                             (g_playSystem_00802A38,
                              *(AnonShape_005EFAE0_B406B78B **)(pcVar13 + 0x1d),(int *)&local_18);
          if (iVar17 != 0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          iVar17 = thunk_FUN_004dbb10(this_01,(int)local_18);
          if (iVar17 == 0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if ((this_01->field_04D0 != CASE_0) || (iVar17 = 100, this_01->field_04D4 != 0)) {
            iVar17 = 0x32;
          }
          thunk_FUN_004dbb60(this_01,(int *)local_18,iVar17);
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
          if ((int *)this_01->field_04E0[*(uint *)(pcVar13 + 0x1d) - 4] == (int *)0x0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          thunk_FUN_004dbe00(this_01,(int *)this_01->field_04E0[*(uint *)(pcVar13 + 0x1d) - 4]);
        }
        if (this_01->field_0024 != (byte *)(uint)(byte)this_01->field_0010->field_112D) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        this_01->vfunc_90(4,0x40b);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      cVar42 = *pcVar13;
      if (cVar42 == '\x06') {
        this_01->field_04E0[0] = 1;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar42 == '\a') {
        this_01->field_04E0[0] = 0;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar42 != '\t') {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if ((this_01->field_04D0 != CASE_0) && (this_01->field_04D0 != CASE_2)) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    if (4999 < (int)this_01->field_04D8) {
      this_01->field_04D4 = 1;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x1a:
    pcVar13 = *(char **)(dVar24 + 0x17);
    if (*pcVar13 == '\x02') {
      thunk_FUN_004ea530(this_01,(short)*(undefined4 *)(pcVar13 + 1),
                         (short)*(undefined4 *)(pcVar13 + 5),(short)*(undefined4 *)(pcVar13 + 9));
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x1e:
    pbVar34 = *(byte **)(dVar24 + 0x17);
    if (*pbVar34 == 0) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (8 < *pbVar34) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((this_01->field_0024 == (byte *)(uint)(byte)this_01->field_0010->field_112D) &&
       ((TVar7 = this_01->field_05AC, TVar7 == CASE_35 ||
        ((0x53 < (int)TVar7 && ((int)TVar7 < 0x5b)))))) {
      uVar18 = GetPlayerRaceId(*(char *)&this_01->field_023D);
      uVar18 = uVar18 & 0xff;
      if (uVar18 == 1) {
        pTVar28 = this_01->vtable;
        uVar26 = 0x208;
LAB_004bbfe9:
        (*pTVar28->vfunc_90)(this_01,4,uVar26);
      }
      else if (uVar18 == 2) {
        this_01->vfunc_90(4,0x2d0);
      }
      else if (uVar18 == 3) {
        pTVar28 = this_01->vtable;
        uVar26 = 0x38b;
        goto LAB_004bbfe9;
      }
    }
    iVar17 = sub_004C7860(this_01,(uint)*pbVar34,*(uint *)(pbVar34 + 1),(int)*(short *)(pbVar34 + 5)
                          ,0,1);
    if (iVar17 != 0) {
      thunk_FUN_004c7cc0(this_01,(uint)*pbVar34,*(uint *)(pbVar34 + 1),(int)*(short *)(pbVar34 + 5),
                         (uint)(*pbVar34 != 2),*(uint *)(pbVar34 + 7),0,0xff,(char *)0x0);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x1f:
    if ((this_01->field_05AC == CASE_3A) && (**(char **)(dVar24 + 0x17) == '\x02')) {
      thunk_FUN_004d9b20((int)this_01);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((this_01->field_05AC == CASE_64) && (**(char **)(dVar24 + 0x17) == '\x02')) {
      thunk_FUN_004e4670((int)this_01);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x20:
    pbVar34 = *(byte **)(dVar24 + 0x17);
    if ((this_01->field_05AC == CASE_52) || (this_01->field_05AC == CASE_5F)) {
      if (*pbVar34 == 1) {
        thunk_FUN_004ebab0(this_01,(uint)*(ushort *)(pbVar34 + 1),*(int *)(pbVar34 + 3));
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004eb6d0(this_01,(uint)*pbVar34,(uint)*(ushort *)(pbVar34 + 1),*(int *)(pbVar34 + 3)
                         ,(uint)*(ushort *)(pbVar34 + 7));
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x22:
    iVar17 = thunk_FUN_004e8030(this_01->field_05AC);
    if (iVar17 == 3) {
      thunk_FUN_004d7270((AnonShape_004D7270_8F0A3C37 *)this_01);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    thunk_FUN_004c7cc0(this_01,5,0,0,0,0xffffffff,0,0xff,(char *)0x0);
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  case 0x23:
    puVar10 = *(uint **)(dVar24 + 0x17);
    uVar18 = puVar10[1];
    if (((((-1 < (int)uVar18) && ((int)uVar18 < (int)g_worldGrid.sizeX)) &&
         (uVar29 = puVar10[2], -1 < (int)uVar29)) &&
        (((int)uVar29 < (int)g_worldGrid.sizeY && (uVar11 = puVar10[3], -1 < (int)uVar11)))) &&
       (((int)uVar11 < (int)g_worldGrid.sizeX &&
        ((uVar12 = *puVar10, 0x31 < uVar12 && (uVar12 < 0x74)))))) {
      if (this_01->field_05AC == CASE_53) {
        thunk_FUN_004cdfd0(this_01,uVar12,uVar18,uVar29,uVar11);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (this_01->field_05AC == CASE_6C) {
        thunk_FUN_004e99e0(this_01,uVar18,uVar29,uVar11);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    break;
  case 0x27:
    TVar7 = this_01->field_05AC;
    if (TVar7 == CASE_50) {
      thunk_FUN_004b6e30(this_01,(uint)**(byte **)(dVar24 + 0x17),
                         (uint)(*(byte **)(dVar24 + 0x17))[1]);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((TVar7 == CASE_34) && (**(char **)(dVar24 + 0x17) == '\x02')) {
      thunk_FUN_004de1e0(this_01,(uint)(byte)(*(char **)(dVar24 + 0x17))[1]);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((TVar7 == CASE_5B) && (**(char **)(dVar24 + 0x17) == '\x02')) {
      thunk_FUN_004de300(this_01,(uint)(byte)(*(char **)(dVar24 + 0x17))[1]);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x28:
    if (**(char **)(dVar24 + 0x17) == '\0') {
      if ((this_01->field_0245 == CASE_0) || (this_01->field_0245 == CASE_5)) {
        SetState(this_01,2,1);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    else if (this_01->field_0245 == CASE_4) {
      iVar17 = sub_004C7070(this_01,1);
      if (iVar17 != 0) {
        SetState(this_01,3,1);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      local_8 = (byte *)0x0;
      iVar17 = this_01->field_05B8 + -2;
      if (-1 < iVar17) {
        sVar16 = *(short *)&this_01->field_05B0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_14 = CONCAT22((short)(bVar1 - 8 >> 0x10),sVar16);
        sVar4 = *(short *)&this_01->field_05B4;
        do {
          sVar15 = (short)iVar17;
          if (((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) || (sVar4 < 0)) ||
              ((g_worldGrid.sizeY <= sVar4 || (sVar15 < 0)))) || (g_worldGrid.sizeZ <= sVar15)) {
            pSVar30 = (STWorldObject *)0x0;
          }
          else {
            pSVar30 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar15 +
                       (int)g_worldGrid.sizeX * (int)sVar4 + (int)sVar16].objects[0];
          }
          if (pSVar30 == (STWorldObject *)0x0) {
            if (((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) ||
               ((sVar4 < 0 ||
                (((g_worldGrid.sizeY <= sVar4 || (sVar15 < 0)) || (g_worldGrid.sizeZ <= sVar15))))))
            {
              sVar15 = -1;
            }
            else {
              sVar15 = g_pathingGrid.cells
                       [(int)g_pathingGrid.planeStride * (int)sVar15 +
                        (int)g_pathingGrid.sizeX * (int)sVar4 + (int)sVar16];
            }
            if (sVar15 == -1) {
              local_8 = (byte *)((int)&puRam00000000 + 1);
              sub_004C6C70(this_01,this_01->field_05B0,this_01->field_05B4,iVar17 + 1);
              break;
            }
          }
          iVar17 = iVar17 + -1;
        } while (-1 < iVar17);
      }
      if (local_8 == (byte *)0x0) {
        sVar16 = *(short *)&this_01->field_05B0;
        sVar4 = *(short *)&this_01->field_05B4;
        if (((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) ||
           ((sVar4 < 0 || ((g_worldGrid.sizeY <= sVar4 || (g_worldGrid.sizeZ < 1)))))) {
          pSVar30 = (STWorldObject *)0x0;
        }
        else {
          pSVar30 = g_worldGrid.cells[(int)g_worldGrid.sizeX * (int)sVar4 + (int)sVar16].objects[0];
        }
        bVar41 = false;
        if (pSVar30 == (STWorldObject *)0x0) {
          if ((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) || (sVar4 < 0)) ||
             ((g_worldGrid.sizeY <= sVar4 || (g_worldGrid.sizeZ < 1)))) {
            sVar16 = -1;
          }
          else {
            sVar16 = g_pathingGrid.cells[(int)g_pathingGrid.sizeX * (int)sVar4 + (int)sVar16];
          }
          if (sVar16 == 0) {
            sub_004C6C70(this_01,this_01->field_05B0,this_01->field_05B4,0);
            bVar41 = true;
          }
        }
        if (!bVar41) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
      }
      this_01->field_0249 = 3;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x2a:
    if (this_01->field_05AC != CASE_6D) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    switch(**(undefined1 **)(dVar24 + 0x17)) {
    case 0:
      if (this_01->field_04D0 != CASE_0) {
        thunk_FUN_004dbcc0(this_01,(int *)0x0,this_01->field_04E0[0] - 5);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 1:
      if (this_01->field_04D0 != CASE_0) {
        thunk_FUN_004dbcc0(this_01,(int *)0x0,this_01->field_04E0[0] + 5);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 2:
      if (this_01->field_04D4 != 0) {
        thunk_FUN_004dbcc0(this_01,(int *)((int)&puRam00000000 + 1),this_01->field_04E0[1] - 5);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 3:
      if (this_01->field_04D4 != 0) {
        thunk_FUN_004dbcc0(this_01,(int *)((int)&puRam00000000 + 1),this_01->field_04E0[1] + 5);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 4:
      piVar43 = (int *)0x0;
      goto LAB_004bd06b;
    case 5:
      piVar43 = (int *)((int)&puRam00000000 + 1);
LAB_004bd06b:
      thunk_FUN_004dbf30(this_01,piVar43);
    }
  }
  g_currentExceptionFrame = local_c4.previous;
  return 0;
}

