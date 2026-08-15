#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_bproc.cpp
   Diagnostic line evidence: 415 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_69=105;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_36=54;CASE_39=57;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190
    */

undefined4 __fastcall FUN_004c84c0(TLOBaseTy *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar4;
  byte bVar5;
  int iVar7;
  int local_EAX_263;
  int local_EAX_294;
  undefined4 uVar8;
  int iVar9;
  int uVar10;
  int local_EAX_683;
  int local_EAX_749;
  int local_EAX_801;
  dword dVar10;
  int iVar6;
  int local_EAX_2277;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  AnonPointee_TLOBaseTy_0607 *pAVar14;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (*(int *)&param_1->field_0x361 == 0) {
    if (param_1->field_03D4 == 0) {
      return 0;
    }
    pAVar14 = param_1->field_0607;
    if (pAVar14 == nullptr) {
      return 0;
    }
    iVar6 = TLOBaseTy::sub_004C7860
                      (param_1,pAVar14->field_0000,pAVar14->field_0004,pAVar14->field_0008,1,0);
    if (iVar6 == 0) {
      return 0;
    }
    local_EAX_2277 = thunk_FUN_004c7c20(param_1);
    if (local_EAX_2277 == 0) {
      return 0;
    }
    pAVar14 = param_1->field_0607;
    TLOBaseTy::thunk_FUN_004c7cc0
              (param_1,pAVar14->field_0000,pAVar14->field_0004,pAVar14->field_0008,0,
               pAVar14->field_000C,pAVar14->field_0010,pAVar14->field_0014,(char *)(pAVar14 + 1));
    if (1 < param_1->field_03D4) {
      uVar11 = param_1->field_03D4 * 0x27 - 0x27;
      puVar13 = (undefined4 *)((int)&param_1->field_0607[1].field_000C + 3);
      pAVar14 = param_1->field_0607;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        pAVar14->field_0000 = *puVar13;
        puVar13 = puVar13 + 1;
        pAVar14 = (AnonPointee_TLOBaseTy_0607 *)&pAVar14->field_0004;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined1 *)&pAVar14->field_0000 = *(undefined1 *)puVar13;
        puVar13 = (undefined4 *)((int)puVar13 + 1);
        pAVar14 = (AnonPointee_TLOBaseTy_0607 *)((int)&pAVar14->field_0000 + 1);
      }
    }
    param_1->field_03D4 = param_1->field_03D4 + -1;
    return 0;
  }
  if (((*(int *)&param_1->field_0x361 == 5) &&
      (iVar7 = param_1->vfunc_7C(), iVar7 == 100)) || (99 < param_1->field_0394))
  {
    iVar7 = TLOBaseTy::procResult(param_1);
    if (iVar7 == 0) {
      return 0;
    }
    iVar7 = *(int *)&param_1->field_0x36d + -1;
    *(int *)&param_1->field_0x36d = iVar7;
    if (iVar7 < 1) {
      *(undefined4 *)&param_1->field_0x365 = *(undefined4 *)&param_1->field_0x361;
      local_EAX_263 = TLOBaseTy::sub_004C90C0(param_1);
      if ((local_EAX_263 == 0) &&
         (local_EAX_294 =
               ReportDebugMessage("E:\\__titans\\Artem\\TLO_bproc.cpp",0x19f,0,0,"%s"
                                  ,"What's that ?"), local_EAX_294 != 0)) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      *(undefined4 *)&param_1->field_0x36d = 0;
      TLOBaseTy::sub_004C7460(param_1);
      return 0;
    }
    param_1->field_038C = g_playSystem_00802A38->field_00E4;
    param_1->field_0394 = 0;
    thunk_FUN_004c7260(param_1,*(Global_sub_004C7260_param_1Enum *)&param_1->field_0x361,
                       *(int *)&param_1->field_0x369,&param_1->field_0398,&param_1->field_039C,
                       &param_1->field_03A0,&param_1->field_03A4);
    param_1->field_03A8 = 0;
    param_1->field_03AC = 0;
    param_1->field_03B0 = 0;
    param_1->field_03B4 = 0;
    switch(param_1->field_05AC) {
    case CASE_32:
    case CASE_40:
    case CASE_49:
    case CASE_5C:
      thunk_FUN_004ce7a0(param_1);
      TLOBaseTy::sub_004CE860(param_1);
    }
    TLOBaseTy::sub_004C7460(param_1);
    return 0;
  }
  if (*(int *)&param_1->field_0x361 == 5) {
    uVar12 = (uint)param_1->field_0390 / 100;
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    if (g_playSystem_00802A38->field_00E4 < param_1->field_038C + uVar12) {
      return 0;
    }
    param_1->field_038C = g_playSystem_00802A38->field_00E4;
    param_1->field_03C0 = 0;
    param_1->field_03C8 = 0;
    param_1->field_03C4 = 0;
    param_1->field_03BC = 0;
    param_1->field_03B8 = 0;
    iVar7 = *(int *)(&DAT_007e29f0 + (param_1->field_0235 * 3 + param_1->field_0239) * 4) / 100;
    if (*(int *)(&DAT_007e29f0 + (param_1->field_0235 * 3 + param_1->field_0239) * 4) != 0) {
      if (iVar7 == 0) {
        iVar7 = 1;
      }
      iVar9 = thunk_FUN_004d7b90(*(char *)&param_1->field_0024,DAT_00794d84);
      if (iVar9 < iVar7) {
        param_1->field_03BC = 1;
        goto LAB_004c8806;
      }
      thunk_FUN_004d7e50(*(char *)&param_1->field_0024,
                         *(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4),
                         (int)param_1->field_0018,iVar7);
    }
    if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
      thunk_FUN_004d8b70((char)param_1->field_0024);
    }
    uVar10 = LookupRecordByte(*(char *)&param_1->field_023D);
    param_1->field_0241 =
         param_1->field_0241 +
         *(int *)(&DAT_007e4178 + ((uint)(byte)uVar10 + param_1->field_0235 * 3) * 4) / 100;
    local_EAX_683 = LookupRecordByte(*(char *)&param_1->field_023D);
    param_1->field_05D7 =
         (param_1->field_0241 * 100) /
         *(int *)(&DAT_007e4178 + ((uint)(byte)local_EAX_683 + param_1->field_0235 * 3) * 4);
    local_EAX_749 = LookupRecordByte(*(char *)&param_1->field_023D);
    if (*(int *)(&DAT_007e4178 + ((uint)(byte)local_EAX_749 + param_1->field_0235 * 3) * 4) <=
        param_1->field_0241) {
      local_EAX_801 = LookupRecordByte(*(char *)&param_1->field_023D);
      param_1->field_0241 =
           *(int *)(&DAT_007e4178 + ((uint)(byte)local_EAX_801 + param_1->field_0235 * 3) * 4);
    }
LAB_004c8806:
    thunk_FUN_004c7260(param_1,*(Global_sub_004C7260_param_1Enum *)&param_1->field_0x361,
                       *(int *)&param_1->field_0x369,&param_1->field_0398,&param_1->field_039C,
                       &param_1->field_03A0,&param_1->field_03A4);
    TLOBaseTy::sub_004C7460(param_1);
    return 0;
  }
  uVar12 = (uint)param_1->field_0390 / 100;
  if (uVar12 == 0) {
    uVar12 = 1;
  }
  dVar10 = param_1->slot_2C();
  iVar7 = thunk_FUN_004b72e0(*(char *)&param_1->field_0024,dVar10);
  if ((iVar7 == 0) ||
     (iVar7 = thunk_FUN_004b79c0(*(char *)&param_1->field_0024,(int)param_1->field_0018), iVar7 != 0
     )) {
    iVar7 = 0;
  }
  else {
    iVar7 = 1;
  }
  param_1->field_03B8 = iVar7;
  if ((iVar7 != 0) &&
     (uVar12 = uVar12 << 2, g_sndUnderAttMeneg_00811798 != nullptr)) {
    SndUnderAttMenegC::sub_00621580(g_sndUnderAttMeneg_00811798,param_1->field_0024,5);
  }
  if (g_playSystem_00802A38->field_00E4 < param_1->field_038C + uVar12) {
    return 0;
  }
  param_1->field_038C = g_playSystem_00802A38->field_00E4;
  bVar4 = true;
  param_1->field_03C0 = 0;
  param_1->field_03C8 = 0;
  param_1->field_03C4 = 0;
  param_1->field_03BC = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  iVar7 = 0;
  if (*(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4) == -1) {
LAB_004c8bf2:
    param_1->field_0394 = param_1->field_0394 + 1;
    if (*(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4) != -1) {
      param_1->field_03A8 = param_1->field_03A8 + iVar7;
      param_1->field_03B0 = param_1->field_03B0 + local_8;
      param_1->field_03AC = param_1->field_03AC + local_10;
      param_1->field_03B4 = param_1->field_03B4 + local_c;
      bVar5 = LookupRecordByte(*(char *)&param_1->field_0024);
      if (bVar5 == 3) {
        if (iVar7 != 0) {
          thunk_FUN_004e4330((int)param_1->field_0024,iVar7);
        }
      }
      else if (iVar7 != 0) {
        thunk_FUN_004d7c10(*(char *)&param_1->field_0024,
                           *(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4),
                           (int)param_1->field_0018,iVar7);
      }
      if (local_10 != 0) {
        thunk_FUN_004d7d30(*(char *)&param_1->field_0024,
                           *(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4),
                           (int)param_1->field_0018,local_10);
      }
      if (local_8 != 0) {
        thunk_FUN_004d7e50(*(char *)&param_1->field_0024,
                           *(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4),
                           (int)param_1->field_0018,local_8);
      }
      if (local_c != 0) {
        thunk_FUN_004d7f70(*(char *)&param_1->field_0024,
                           *(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4),
                           (int)param_1->field_0018,local_c);
      }
    }
    if (100 < param_1->field_0394) {
      param_1->field_0394 = 100;
    }
    if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
      thunk_FUN_004d8b70((char)param_1->field_0024);
      return 0;
    }
  }
  else {
    iVar7 = param_1->field_0398;
    if (99 < iVar7) {
      local_14 = iVar7 / 100;
    }
    iVar9 = param_1->field_039C;
    if (99 < iVar9) {
      local_10 = iVar9 / 100;
    }
    iVar1 = param_1->field_03A0;
    if (99 < iVar1) {
      local_8 = iVar1 / 100;
    }
    iVar2 = param_1->field_03A4;
    if (99 < iVar2) {
      local_c = iVar2 / 100;
    }
    if (iVar7 % 100 != 0) {
      local_14 = local_14 + 1;
    }
    if (iVar9 % 100 != 0) {
      local_10 = local_10 + 1;
    }
    if (iVar1 % 100 != 0) {
      local_8 = local_8 + 1;
    }
    if (iVar2 % 100 != 0) {
      local_c = local_c + 1;
    }
    if (iVar7 < param_1->field_03A8 + local_14) {
      local_14 = iVar7 - param_1->field_03A8;
    }
    if (iVar9 < param_1->field_03AC + local_10) {
      local_10 = iVar9 - param_1->field_03AC;
    }
    if (iVar1 < local_8 + param_1->field_03B0) {
      local_8 = iVar1 - param_1->field_03B0;
    }
    if (iVar2 < local_c + param_1->field_03B4) {
      local_c = iVar2 - param_1->field_03B4;
    }
    bVar5 = LookupRecordByte(*(char *)&param_1->field_0024);
    if (bVar5 == 3) {
      if ((local_14 != 0) &&
         (uVar12 = thunk_FUN_004e41c0((int)param_1->field_0024), (int)uVar12 < local_14)) {
        bVar4 = false;
        param_1->field_03C8 = 1;
      }
    }
    else if ((local_14 != 0) &&
            (iVar7 = thunk_FUN_004d7b10(*(char *)&param_1->field_0024,
                                        *(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4))
            , iVar7 < local_14)) {
      bVar4 = false;
      param_1->field_03C8 = 1;
    }
    if ((local_10 != 0) &&
       (iVar7 = thunk_FUN_004d7b50(*(char *)&param_1->field_0024,
                                   *(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4)),
       iVar7 < local_10)) {
      bVar4 = false;
      param_1->field_03C4 = 1;
    }
    if ((local_8 != 0) &&
       (iVar7 = thunk_FUN_004d7b90(*(char *)&param_1->field_0024,
                                   *(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4)),
       iVar7 < local_8)) {
      bVar4 = false;
      param_1->field_03BC = 1;
    }
    if ((local_c == 0) ||
       (iVar7 = thunk_FUN_004d7bd0(*(char *)&param_1->field_0024,
                                   *(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4)),
       local_c <= iVar7)) {
      iVar7 = local_14;
      if (bVar4) goto LAB_004c8bf2;
    }
    else {
      param_1->field_03C0 = 1;
    }
    if (g_sndUnderAttMeneg_00811798 != nullptr) {
      if (param_1->field_03BC != 0) {
        SndUnderAttMenegC::sub_00621580(g_sndUnderAttMeneg_00811798,param_1->field_0024,4);
      }
      if (param_1->field_03C4 != 0) {
        SndUnderAttMenegC::sub_00621580(g_sndUnderAttMeneg_00811798,param_1->field_0024,2);
      }
      if (param_1->field_03C8 != 0) {
        bVar5 = LookupRecordByte(*(char *)&param_1->field_0024);
        SndUnderAttMenegC::sub_00621580
                  (g_sndUnderAttMeneg_00811798,param_1->field_0024,
                   (-(uint)(bVar5 != 3) & 0xfffffffd) + 6);
      }
      if (param_1->field_03C0 != 0) {
        SndUnderAttMenegC::sub_00621580(g_sndUnderAttMeneg_00811798,param_1->field_0024,7);
        return 0;
      }
    }
  }
  return 0;
}

