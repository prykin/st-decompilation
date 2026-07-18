FUN_006ea960:
006EA960  55                        PUSH EBP
006EA961  8B EC                     MOV EBP,ESP
006EA963  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EA969  56                        PUSH ESI
006EA96A  57                        PUSH EDI
006EA96B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006EA96E  3B F8                     CMP EDI,EAX
006EA970  0F 83 0B 01 00 00         JNC 0x006eaa81
006EA976  8B 91 1C 03 00 00         MOV EDX,dword ptr [ECX + 0x31c]
006EA97C  8D 04 7F                  LEA EAX,[EDI + EDI*0x2]
006EA97F  C1 E0 03                  SHL EAX,0x3
006EA982  2B C7                     SUB EAX,EDI
006EA984  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EA987  8B 34 82                  MOV ESI,dword ptr [EDX + EAX*0x4]
006EA98A  8D 14 82                  LEA EDX,[EDX + EAX*0x4]
006EA98D  F7 C6 00 80 00 00         TEST ESI,0x8000
006EA993  0F 84 E8 00 00 00         JZ 0x006eaa81
006EA999  D9 42 74                  FLD float ptr [EDX + 0x74]
006EA99C  D8 5D 0C                  FCOMP float ptr [EBP + 0xc]
006EA99F  DF E0                     FNSTSW AX
006EA9A1  F6 C4 40                  TEST AH,0x40
006EA9A4  0F 84 99 00 00 00         JZ 0x006eaa43
006EA9AA  D9 42 78                  FLD float ptr [EDX + 0x78]
006EA9AD  D8 5D 10                  FCOMP float ptr [EBP + 0x10]
006EA9B0  DF E0                     FNSTSW AX
006EA9B2  F6 C4 40                  TEST AH,0x40
006EA9B5  0F 84 88 00 00 00         JZ 0x006eaa43
006EA9BB  D9 42 7C                  FLD float ptr [EDX + 0x7c]
006EA9BE  D8 5D 14                  FCOMP float ptr [EBP + 0x14]
006EA9C1  DF E0                     FNSTSW AX
006EA9C3  F6 C4 40                  TEST AH,0x40
006EA9C6  0F 85 C4 00 00 00         JNZ 0x006eaa90
006EA9CC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006EA9CF  81 E6 FF FF 87 FF         AND ESI,0xff87ffff
006EA9D5  89 42 7C                  MOV dword ptr [EDX + 0x7c],EAX
006EA9D8  8B 82 A0 00 00 00         MOV EAX,dword ptr [EDX + 0xa0]
006EA9DE  85 C0                     TEST EAX,EAX
006EA9E0  89 32                     MOV dword ptr [EDX],ESI
006EA9E2  0F 84 A8 00 00 00         JZ 0x006eaa90
006EA9E8  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
006EA9EB  85 C0                     TEST EAX,EAX
006EA9ED  0F 85 9D 00 00 00         JNZ 0x006eaa90
006EA9F3  F7 C6 00 00 01 00         TEST ESI,0x10000
006EA9F9  0F 84 91 00 00 00         JZ 0x006eaa90
006EA9FF  83 CE 08                  OR ESI,0x8
LAB_006eaa02:
006EAA02  8A 42 04                  MOV AL,byte ptr [EDX + 0x4]
006EAA05  89 32                     MOV dword ptr [EDX],ESI
006EAA07  A8 40                     TEST AL,0x40
006EAA09  0F 84 81 00 00 00         JZ 0x006eaa90
006EAA0F  8B 52 1C                  MOV EDX,dword ptr [EDX + 0x1c]
006EAA12  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EAA15  C1 E0 03                  SHL EAX,0x3
006EAA18  2B C2                     SUB EAX,EDX
006EAA1A  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EAA1D  8B 81 1C 03 00 00         MOV EAX,dword ptr [ECX + 0x31c]
006EAA23  8B 4C 90 08               MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
006EAA27  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EAA2A  85 C9                     TEST ECX,ECX
006EAA2C  75 62                     JNZ 0x006eaa90
006EAA2E  8B 08                     MOV ECX,dword ptr [EAX]
006EAA30  F7 C1 00 00 01 00         TEST ECX,0x10000
006EAA36  74 58                     JZ 0x006eaa90
006EAA38  83 C9 08                  OR ECX,0x8
006EAA3B  5F                        POP EDI
006EAA3C  89 08                     MOV dword ptr [EAX],ECX
006EAA3E  5E                        POP ESI
006EAA3F  5D                        POP EBP
006EAA40  C2 10 00                  RET 0x10
LAB_006eaa43:
006EAA43  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006EAA46  81 E6 FF FF 87 FF         AND ESI,0xff87ffff
006EAA4C  89 42 74                  MOV dword ptr [EDX + 0x74],EAX
006EAA4F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006EAA52  89 42 78                  MOV dword ptr [EDX + 0x78],EAX
006EAA55  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006EAA58  89 42 7C                  MOV dword ptr [EDX + 0x7c],EAX
006EAA5B  8B 82 A0 00 00 00         MOV EAX,dword ptr [EDX + 0xa0]
006EAA61  81 CE 00 00 80 00         OR ESI,0x800000
006EAA67  85 C0                     TEST EAX,EAX
006EAA69  89 32                     MOV dword ptr [EDX],ESI
006EAA6B  74 23                     JZ 0x006eaa90
006EAA6D  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
006EAA70  85 C0                     TEST EAX,EAX
006EAA72  75 1C                     JNZ 0x006eaa90
006EAA74  F7 C6 00 00 01 00         TEST ESI,0x10000
006EAA7A  74 14                     JZ 0x006eaa90
006EAA7C  83 CE 48                  OR ESI,0x48
006EAA7F  EB 81                     JMP 0x006eaa02
LAB_006eaa81:
006EAA81  83 FF FF                  CMP EDI,-0x1
006EAA84  74 0A                     JZ 0x006eaa90
006EAA86  68 14 EF 7E 00            PUSH 0x7eef14
006EAA8B  E8 C0 E1 FF FF            CALL 0x006e8c50
LAB_006eaa90:
006EAA90  5F                        POP EDI
006EAA91  5E                        POP ESI
006EAA92  5D                        POP EBP
006EAA93  C2 10 00                  RET 0x10
