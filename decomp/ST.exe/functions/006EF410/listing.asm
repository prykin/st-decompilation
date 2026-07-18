FUN_006ef410:
006EF410  55                        PUSH EBP
006EF411  8B EC                     MOV EBP,ESP
006EF413  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006EF416  33 C0                     XOR EAX,EAX
006EF418  85 C9                     TEST ECX,ECX
006EF41A  75 02                     JNZ 0x006ef41e
006EF41C  5D                        POP EBP
006EF41D  C3                        RET
LAB_006ef41e:
006EF41E  8B 91 55 04 00 00         MOV EDX,dword ptr [ECX + 0x455]
006EF424  85 D2                     TEST EDX,EDX
006EF426  7E 12                     JLE 0x006ef43a
006EF428  81 C1 59 04 00 00         ADD ECX,0x459
LAB_006ef42e:
006EF42E  83 39 00                  CMP dword ptr [ECX],0x0
006EF431  74 01                     JZ 0x006ef434
006EF433  40                        INC EAX
LAB_006ef434:
006EF434  83 C1 04                  ADD ECX,0x4
006EF437  4A                        DEC EDX
006EF438  75 F4                     JNZ 0x006ef42e
LAB_006ef43a:
006EF43A  5D                        POP EBP
006EF43B  C3                        RET
