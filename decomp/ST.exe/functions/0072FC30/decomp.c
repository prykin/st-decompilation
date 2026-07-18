
/* Library Function - Single Match
    _gmtime
   
   Library: Visual Studio 2003 Debug */

tm * __cdecl _gmtime(time_t *_Time)

{
  bool bVar1;
  tm *ptVar2;
  int iVar3;
  int iVar4;
  int local_18;
  undefined *local_14;
  int local_10;
  
  iVar4 = (int)*_Time;
  bVar1 = false;
  if (iVar4 < 0) {
    ptVar2 = (tm *)0x0;
  }
  else {
    iVar3 = iVar4 % 0x7861f80;
    iVar4 = (iVar4 / 0x7861f80) * 4;
    local_18 = iVar4 + 0x46;
    local_10 = iVar3;
    if (0x1e1337f < iVar3) {
      local_18 = iVar4 + 0x47;
      local_10 = iVar3 + -0x1e13380;
      if (0x1e1337f < local_10) {
        local_18 = iVar4 + 0x48;
        local_10 = iVar3 + -0x3c26700;
        if (local_10 < 0x1e28500) {
          bVar1 = true;
        }
        else {
          local_18 = iVar4 + 0x49;
          local_10 = iVar3 + -0x5a4ec00;
        }
      }
    }
    DAT_008571bc = local_18;
    DAT_008571c4 = local_10 / 0x15180;
    if (bVar1) {
      local_14 = &DAT_007f1ef0;
    }
    else {
      local_14 = &DAT_007f1f24;
    }
    for (local_18 = 1; *(int *)(local_14 + local_18 * 4) < DAT_008571c4; local_18 = local_18 + 1) {
    }
    DAT_008571b8 = local_18 + -1;
    DAT_008571b4 = DAT_008571c4 - *(int *)(local_14 + DAT_008571b8 * 4);
    DAT_008571c0 = ((int)*_Time / 0x15180 + 4) % 7;
    DAT_008571b0 = (local_10 % 0x15180) / 0xe10;
    iVar4 = (local_10 % 0x15180) % 0xe10;
    DAT_008571ac = iVar4 / 0x3c;
    DAT_008571a8 = iVar4 % 0x3c;
    DAT_008571c8 = 0;
    ptVar2 = (tm *)&DAT_008571a8;
  }
  return ptVar2;
}

