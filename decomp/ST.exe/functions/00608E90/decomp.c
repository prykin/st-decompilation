#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00608e90(void *this,AnonShape_00608E90_523B07BC *param_1)

{
  uint uVar1;
  short sVar2;
  int local_EAX_15;
  int local_EAX_871;
  uint uVar3;
  undefined4 uVar4;
  int iVar2;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *puVar8;
  byte *puVar9;
  byte *local_c;
  AnonShape_0060EA30_DCEB68AD *local_8;

  local_EAX_15 = STGameObjC::GetMessage(this,(STMessage *)param_1);
  if (local_EAX_15 == 0xffff) {
    return 0xffff;
  }
  uVar1 = param_1->field_0010;
  if (3 < uVar1) {
    if (uVar1 == 0x10f) {
      local_c = (byte *)thunk_FUN_0060c020(this,(uint *)&local_8);
      if (local_c == nullptr) {
        return 0;
      }
      STPlaySystemC::SaveObjData(g_playSystem_00802A38,STField<int *>(this,0x18),local_c,local_8);
      FreeAndNull(&local_c);
      return 0;
    }
    if (uVar1 != 0x111) {
      return 0;
    }
    thunk_FUN_0060c2d0(this);
    return 0;
  }
  if (uVar1 == 3) {
    if (STField<int>(this,0x1f5) == 0x4d) {
      iVar6 = STField<int>(this,0x1f9);
      sVar2 = (short)(iVar6 >> 0x1f);
      if (iVar6 < 0) {
        iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar2) -
                       (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar2) -
                            (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
      }
      iVar7 = STField<int>(this,0x1ed);
      sVar2 = (short)(iVar7 >> 0x1f);
      if (iVar7 < 0) {
        iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar2) -
                       (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar2) -
                            (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
      }
      iVar5 = STField<int>(this,0x1e9);
      sVar2 = (short)(iVar5 >> 0x1f);
      if (iVar5 < 0) {
        iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) -
                       (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                            (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
      }
      thunk_FUN_00496e40(iVar5,iVar7,iVar6,STField<int>(this,0x18));
    }
    if (STField<int>(this,0x23c) != 0) {
      thunk_FUN_0060d300((int)this);
    }
    thunk_FUN_0060a9d0(this);
    return 0;
  }
  if (uVar1 == 0) {
    if ((STField<int>(this,0x221) == 0) &&
       (thunk_FUN_0060c2d0(this), STField<int>(this,0x221) == 0)) {
      thunk_FUN_006099a0(this);
      return 0;
    }
    if (STField<int>(this,0x248) == 1) {
      if (STField<uint>(this,0x250) <= g_playSystem_00802A38->field_00E4) {
        if ((STField<int>(this,0x20d) == 5) && (iVar6 = thunk_FUN_0060cef0(this), iVar6 == 0)) {
          thunk_FUN_006099a0(this);
        }
        STField<undefined1>(this,0x22f) = 0;
        STField<undefined4>(this,0x248) = 2;
      }
    }
    else if (STField<int>(this,0x248) == 2) {
      switch(STField<undefined4>(this,0x20d)) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
        thunk_FUN_0060aa00(this);
        if ((STField<int>(this,0x1f5) == 0x4d) && ((STField<byte>(this,0x254) & 0x1f) == 0)) {
          if (STField<int>(this,0x209) == 0) {
            thunk_FUN_0060bcb0(this,0);
          }
          else {
            thunk_FUN_0060c320(this);
          }
        }
        if ((STField<int>(this,0x1f5) == 0x4c) && ((STField<byte>(this,0x254) & 0x3f) == 0)) {
          thunk_FUN_0060aef0(this);
        }
        break;
      case 5:
        iVar6 = thunk_FUN_0060d070(this);
        if ((0 < iVar6) && (iVar6 == 2)) {
          thunk_FUN_0060d220((int)this);
          uVar1 = g_playSystem_00802A38->field_00E4;
          STField<undefined4>(this,0x248) = 1;
          STField<uint>(this,0x250) = uVar1 + 200;
        }
        break;
      case 6:
        iVar6 = thunk_FUN_0060dab0(this);
        if ((0 < iVar6) && (iVar6 == 2)) {
          thunk_FUN_0060d300((int)this);
          thunk_FUN_006099a0(this);
        }
      }
      if (STField<char>(this,0x22e) != '\0') {
        if (STField<char>(this,0x225) != '\0') {
          uVar4 = thunk_FUN_0060a4b0(this);
          STField<char>(this,0x225) = (char)uVar4;
          STField<int>(this,0x254) = STField<int>(this,0x254) + 1;
          return 0;
        }
        iVar2 = thunk_FUN_0060dd70(this);
        STField<char>(this,0x225) = (char)iVar2;
        if ((char)iVar2 != '\0') {
          thunk_FUN_0060a430(this,0);
          STField<int>(this,0x254) = STField<int>(this,0x254) + 1;
          return 0;
        }
      }
    }
    STField<int>(this,0x254) = STField<int>(this,0x254) + 1;
    return 0;
  }
  if (uVar1 != 2) {
    return 0;
  }
  puVar8 = (byte *)(param_1->field_0014);
  puVar9 = (byte *)((int)this + 0x1d5);
  memmove(puVar9, puVar8, 0x50); /* compiler REP MOVS byte copy */
  if (STField<int>(this,0x1e1) == 2) {
    STFieldC::thunk_FUN_0060c1a0(this,param_1->field_0014);
    return 0;
  }
  iVar6 = STField<int>(this,0x1f9) / 0xc9;
  STField<int>(this,0x24c) = iVar6;
  switch(STField<undefined4>(this,0x1f5)) {
  case 0x3d:
    STField<undefined4>(this,0x20d) = 3;
    STField<undefined4>(this,0x219) = 0x19;
    STField<undefined4>(this,0x211) = 0;
    STField<undefined4>(this,0x215) = 1;
    STField<undefined1>(this,0x225) = 0;
    break;
  case 0x41:
    STField<undefined4>(this,0x20d) = 3;
    STField<undefined4>(this,0x219) = 0x19;
    STField<undefined4>(this,0x211) = 0;
    STField<undefined4>(this,0x215) = 1;
    STField<undefined1>(this,0x225) = 0;
    STField<undefined1>(this,0x22e) = 0;
    break;
  case 0x42:
    STField<undefined4>(this,0x20d) = 0;
    STField<undefined4>(this,0x219) = 0x19;
    STField<undefined4>(this,0x211) = 2;
    STField<undefined4>(this,0x215) = 1;
    goto LAB_006091f5;
  case 0x43:
    STField<undefined4>(this,0x20d) = 0;
    STField<undefined4>(this,0x211) = 1;
    STField<undefined4>(this,0x215) = 1;
    STField<undefined4>(this,0x219) = 0x19;
    STField<int>(this,0x1e9) = STField<int>(this,0x1e9) + 100;
    STField<int>(this,0x1ed) = STField<int>(this,0x1ed) + 100;
    goto LAB_006091f5;
  case 0x4c:
    STField<undefined4>(this,0x20d) = 3;
    STField<undefined4>(this,0x219) = 0x4b;
    STField<undefined4>(this,0x211) = 0;
    STField<undefined4>(this,0x215) = 1;
    STField<undefined1>(this,0x225) = 0;
    goto LAB_00609202;
  case 0x4d:
    STField<undefined4>(this,0x20d) = 3;
    STField<undefined4>(this,0x21d) = 2;
    STField<undefined4>(this,0x219) = 0x6e;
    STField<undefined4>(this,0x211) = 7;
    STField<undefined4>(this,0x215) = 6;
    STField<undefined1>(this,0x22e) = 1;
    STField<undefined1>(this,0x225) = 0;
    if (STField<int>(this,0x209) == 0) {
LAB_00609164:
      thunk_FUN_006099a0(this);
    }
    else {
      iVar6 = (int)(short)iVar6;
      if (STField<int>(this,0x1f9) < 0) {
        iVar6 = iVar6 + -1;
      }
      iVar7 = STField<int>(this,0x1ed);
      sVar2 = (short)(iVar7 >> 0x1f);
      if (iVar7 < 0) {
        iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar2) -
                       (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar2) -
                            (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
      }
      iVar5 = STField<int>(this,0x1e9);
      sVar2 = (short)(iVar5 >> 0x1f);
      if (iVar5 < 0) {
        iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) -
                       (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                            (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
      }
      thunk_FUN_00496cc0(iVar5,iVar7,STField<uint>(this,0x1d9),iVar6,STField<uint>(this,0x18),
                         this);
      if (STField<int>(this,0x209) != 0) {
        if ((STField<int>(this,0x221) == 0) &&
           (thunk_FUN_0060c2d0(this), STField<int>(this,0x221) == 0)) goto LAB_00609164;
        thunk_FUN_0060c320(this);
      }
    }
    break;
  case 0x58:
    STField<undefined4>(this,0x20d) = 6;
    STField<undefined4>(this,0x219) = 100;
    STField<undefined4>(this,0x211) = 4;
    STField<undefined4>(this,0x215) = 0;
    goto LAB_006091f5;
  case 0x65:
    STField<undefined4>(this,0x20d) = 5;
    STField<undefined4>(this,0x219) = 1;
    STField<undefined4>(this,0x211) = 2;
    STField<undefined4>(this,0x215) = 1;
LAB_006091f5:
    local_EAX_871 = thunk_FUN_0060dd70(this);
    STField<char>(this,0x225) = (char)local_EAX_871;
LAB_00609202:
    STField<undefined1>(this,0x22e) = 1;
    break;
  case 0x73:
    STField<undefined4>(this,0x20d) = 3;
    STField<int>(this,0x1e9) = STField<int>(this,0x1e9) + 100;
    STField<int>(this,0x1ed) = STField<int>(this,0x1ed) + 100;
    STField<undefined4>(this,0x219) = 0x24;
    STField<undefined4>(this,0x211) = 4;
    STField<undefined4>(this,0x215) = 1;
    STField<undefined1>(this,0x225) = 0;
    goto LAB_00609202;
  }
  switch(STField<undefined4>(this,0x20d)) {
  case 2:
    STField<int>(this,0x219) = STField<int>(this,0x219) << 1;
    break;
  case 4:
    iVar6 = STField<int>(this,0x219);
    if (iVar6 != 0) {
      STField<float>(this,0x22a) =
           (float)((STField<int>(this,0x1f9) - STField<int>(this,0x1fd)) / iVar6);
    }
    STField<undefined1>(this,0x22e) = 1;
    STField<int>(this,0x219) = iVar6 * 2;
    break;
  case 5:
    iVar6 = thunk_FUN_0060cb60(this,6);
    if (iVar6 != 0) {
      iVar6 = thunk_FUN_0060cef0(this);
joined_r0x0060929e:
      if (iVar6 != 0) break;
    }
    goto LAB_006092a0;
  case 6:
    iVar6 = thunk_FUN_0060cb60(this,5);
    if (iVar6 != 0) {
      iVar6 = thunk_FUN_0060d810(this,5,0x14);
      goto joined_r0x0060929e;
    }
LAB_006092a0:
    thunk_FUN_006099a0(this);
  }
  uVar3 = STFieldC::CreateField(this,STField<uint>(this,0x219));
  if ((int)uVar3 < 1) {
    return 0xffff;
  }
  switch(STField<undefined4>(this,0x20d)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    thunk_FUN_0060a000(this);
    if (STField<int>(this,0x1f5) == 0x4d) {
      STField<undefined4>(this,0x248) = 2;
      goto switchD_006092d2_default;
    }
    break;
  case 5:
    thunk_FUN_0060a000(this);
    STField<undefined4>(this,0x248) = 2;
    goto switchD_006092d2_default;
  case 6:
    iVar6 = thunk_FUN_0060d940(this);
    if (iVar6 == 0) {
      thunk_FUN_006099a0(this);
      goto switchD_006092d2_default;
    }
    break;
  default:
    goto switchD_006092d2_default;
  }
  STField<undefined4>(this,0x248) = 1;
switchD_006092d2_default:
  if (STField<char>(this,0x225) == '\0') {
    return 0;
  }
  STFieldC::sub_00609CD0(this);
  return 0;
}

