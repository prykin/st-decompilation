#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetTOBJImage

   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_GetTOBJImage_param_2Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_78=120;CASE_DC=220;CASE_DD=221;CASE_DE=222;CASE_DF=223;CASE_E0=224;CASE_E2=226;CASE_E6=230;CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235;CASE_F2=242;CASE_F3=243;CASE_F4=244;CASE_F5=245;CASE_F6=246;CASE_F7=247;CASE_F8=248;CASE_F9=249;CASE_FA=250;CASE_FB=251;CASE_FD=253;CASE_FE=254
    */

uint __thiscall
STAllPlayersC::GetTOBJImage
          (STAllPlayersC *this,int param_1,STAllPlayersC_GetTOBJImage_param_2Enum param_2)

{
  code *pcVar1;
  STAllPlayersC_GetTOBJImage_param_2Enum SVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  Global_sub_004C2950_param_3Enum GVar7;
  char local_154 [256];
  int local_54 [17];
  int *local_10;
  STBoatCVTable *local_c;
  STBoatCVTable *local_8;

  SVar2 = param_2;
  piVar6 = local_54;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  switch(param_2) {
  case CASE_1:
  case CASE_2:
  case CASE_3:
  case CASE_4:
  case CASE_5:
  case CASE_6:
  case CASE_7:
  case CASE_8:
  case CASE_9:
  case CASE_A:
  case CASE_B:
  case CASE_C:
  case CASE_D:
  case CASE_E:
  case CASE_F:
  case CASE_10:
  case CASE_11:
  case CASE_12:
  case CASE_13:
  case CASE_14:
  case CASE_15:
  case CASE_16:
  case CASE_17:
  case CASE_18:
  case CASE_19:
  case CASE_1A:
  case CASE_1B:
  case CASE_1C:
  case CASE_1D:
  case CASE_1E:
  case CASE_1F:
  case CASE_20:
  case CASE_21:
  case CASE_22:
  case CASE_23:
  case CASE_24:
  case CASE_25:
  case CASE_26:
  case CASE_27:
  case CASE_28:
    local_c = (STBoatCVTable *)0x0;
    local_154[0] = '\0';
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = (STBoatCVTable *)CONCAT31(local_8._1_3_,0x1d);
    param_2 = 0;
    STBoatC::GetVisualInfo
              ((STBoatC *)local_154,param_1,SVar2,0xe,&local_c,local_154,(undefined1 *)&local_8,
               &param_2);
    if (local_154[0] != '\0') {
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         ((int *)local_c,(Global_mfRLoad_param_2Enum)local_8,local_154,0xffffffff,0,
                          1,0,(undefined4 *)0x0);
      local_54[0xe] = *(undefined4 *)(*(int *)((int)puVar3 + 0x21) + param_2 * 4);
    }
    local_c = (STBoatCVTable *)0x0;
    local_154[0] = '\0';
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = (STBoatCVTable *)CONCAT31(local_8._1_3_,0x1d);
    param_2 = 0;
    STBoatC::GetVisualInfo
              ((STBoatC *)&local_8,param_1,SVar2,0xd,&local_c,local_154,(undefined1 *)&local_8,
               &param_2);
    if (local_154[0] != '\0') {
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         ((int *)local_c,(Global_mfRLoad_param_2Enum)local_8,local_154,0xffffffff,0,
                          1,0,(undefined4 *)0x0);
      local_54[0xd] = *(undefined4 *)(*(int *)((int)puVar3 + 0x21) + param_2 * 4);
    }
    local_c = (STBoatCVTable *)0x0;
    local_154[0] = '\0';
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = (STBoatCVTable *)CONCAT31(local_8._1_3_,0x1d);
    param_2 = 0;
    STBoatC::GetVisualInfo
              ((STBoatC *)&local_c,param_1,SVar2,0xc,(undefined4 *)&local_c,local_154,
               (undefined1 *)&local_8,&param_2);
    if (local_154[0] != '\0') {
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         ((int *)local_c,(Global_mfRLoad_param_2Enum)local_8,local_154,0xffffffff,0,
                          1,0,(undefined4 *)0x0);
      local_54[0xc] = *(undefined4 *)(*(int *)((int)puVar3 + 0x21) + param_2 * 4);
    }
    uVar4 = FUN_00709470(PTR_00807598,local_54,0x11,1,10,0xff);
    return uVar4;
  default:
    iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x324e,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__GetTOBJImage_unkn_007a8a8c);
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0;
  case CASE_32:
  case CASE_33:
  case CASE_34:
  case CASE_35:
  case CASE_36:
  case CASE_37:
  case CASE_38:
  case CASE_39:
  case CASE_3A:
  case CASE_3B:
  case CASE_3C:
  case CASE_3D:
  case CASE_3E:
  case CASE_3F:
  case CASE_40:
  case CASE_41:
  case CASE_42:
  case CASE_43:
  case CASE_44:
  case CASE_45:
  case CASE_46:
  case CASE_47:
  case CASE_48:
  case CASE_49:
  case CASE_4A:
  case CASE_4B:
  case CASE_4C:
  case CASE_4D:
  case CASE_4E:
  case CASE_4F:
  case CASE_50:
  case CASE_51:
  case CASE_52:
  case CASE_53:
  case CASE_54:
  case CASE_55:
  case CASE_56:
  case CASE_57:
  case CASE_58:
  case CASE_59:
  case CASE_5A:
  case CASE_5B:
  case CASE_5C:
  case CASE_5D:
  case CASE_5E:
  case CASE_5F:
  case CASE_60:
  case CASE_61:
  case CASE_62:
  case CASE_63:
  case CASE_64:
  case CASE_65:
  case CASE_66:
  case CASE_67:
  case CASE_68:
  case CASE_69:
  case CASE_6A:
  case CASE_6B:
  case CASE_6C:
  case CASE_6D:
  case CASE_6E:
  case CASE_6F:
  case CASE_70:
  case CASE_71:
  case CASE_72:
  case CASE_73:
  case CASE_78:
    local_10 = local_54;
    GVar7 = 0;
    do {
      local_c = (STBoatCVTable *)0x0;
      local_154[0] = '\0';
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = (STBoatCVTable *)CONCAT31(local_8._1_3_,0x1d);
      param_2 = 0;
      thunk_FUN_004c2950(param_1,SVar2,GVar7,&local_c,local_154,(undefined1 *)&local_8,&param_2);
      if (local_154[0] != '\0') {
        puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                           ((int *)local_c,(Global_mfRLoad_param_2Enum)local_8,local_154,0xffffffff,
                            0,1,0,(undefined4 *)0x0);
        if ((int)(*(int *)puVar3 - CASE_1) < (int)param_2) {
          param_2 = *(int *)puVar3 - CASE_1;
        }
        *local_10 = *(int *)(*(int *)((int)puVar3 + 0x21) + param_2 * 4);
      }
      GVar7 = GVar7 + 1;
      local_10 = local_10 + 1;
    } while ((int)GVar7 < 0x11);
    goto cf_common_exit_0044C477;
  case CASE_DC:
  case CASE_DD:
  case CASE_DE:
  case CASE_DF:
  case CASE_E0:
  case CASE_E2:
    local_c = (STBoatCVTable *)0x0;
    local_154[0] = '\0';
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = (STBoatCVTable *)CONCAT31(local_8._1_3_,0x1d);
    param_2 = 0;
    thunk_FUN_00580910(param_1,SVar2,0xe,&local_c,local_154,(undefined1 *)&local_8,&param_2);
    break;
  case CASE_E6:
  case CASE_E7:
  case CASE_E8:
  case CASE_E9:
  case CASE_EA:
  case CASE_EB:
  case CASE_F2:
  case CASE_F3:
  case CASE_F4:
  case CASE_F5:
  case CASE_F6:
  case CASE_F7:
  case CASE_F8:
  case CASE_F9:
  case CASE_FA:
  case CASE_FB:
    local_c = (STBoatCVTable *)0x0;
    local_154[0] = '\0';
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = (STBoatCVTable *)CONCAT31(local_8._1_3_,0x1d);
    param_2 = 0;
    thunk_FUN_0057a140(param_1,SVar2,0xe,&local_c,local_154,(undefined1 *)&local_8,&param_2);
    goto joined_r0x0044c40d;
  case CASE_FD:
    local_c = (STBoatCVTable *)0x0;
    local_154[0] = '\0';
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = (STBoatCVTable *)CONCAT31(local_8._1_3_,0x1d);
    param_2 = 0;
    thunk_FUN_005ec740(param_1,SVar2,0xe,&local_c,local_154,(undefined1 *)&local_8,&param_2);
    break;
  case CASE_FE:
    local_c = (STBoatCVTable *)0x0;
    local_154[0] = '\0';
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = (STBoatCVTable *)CONCAT31(local_8._1_3_,0x1d);
    param_2 = 0;
    thunk_FUN_005fcf50(param_1,SVar2,0xe,&local_c,local_154,(undefined1 *)&local_8,&param_2);
joined_r0x0044c40d:
    if (local_154[0] == '\0') goto cf_common_exit_0044C477;
    goto LAB_0044c44d;
  }
  if (local_154[0] != '\0') {
LAB_0044c44d:
    puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                       ((int *)local_c,(Global_mfRLoad_param_2Enum)local_8,local_154,0xffffffff,0,1,
                        0,(undefined4 *)0x0);
    local_54[0xe] = *(undefined4 *)(*(int *)((int)puVar3 + 0x21) + param_2 * 4);
  }
cf_common_exit_0044C477:
  uVar4 = FUN_00709470(PTR_00807598,local_54,0x11,1,10,0xff);
  return uVar4;
}

