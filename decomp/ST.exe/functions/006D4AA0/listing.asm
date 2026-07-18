FUN_006d4aa0:
006D4AA0  55                        PUSH EBP
006D4AA1  8B EC                     MOV EBP,ESP
006D4AA3  56                        PUSH ESI
006D4AA4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006D4AA7  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006D4AAA  F7 C1 00 00 10 00         TEST ECX,0x100000
006D4AB0  74 1C                     JZ 0x006d4ace
006D4AB2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006D4AB7  68 B0 01 00 00            PUSH 0x1b0
006D4ABC  68 2C E2 7E 00            PUSH 0x7ee22c
006D4AC1  50                        PUSH EAX
006D4AC2  6A D0                     PUSH -0x30
006D4AC4  E8 77 13 FD FF            CALL 0x006a5e40
006D4AC9  5E                        POP ESI
006D4ACA  5D                        POP EBP
006D4ACB  C2 0C 00                  RET 0xc
LAB_006d4ace:
006D4ACE  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
006D4AD1  53                        PUSH EBX
006D4AD2  85 D2                     TEST EDX,EDX
006D4AD4  57                        PUSH EDI
006D4AD5  B8 AF FF FF FF            MOV EAX,0xffffffaf
006D4ADA  74 45                     JZ 0x006d4b21
006D4ADC  F7 C1 00 00 80 00         TEST ECX,0x800000
006D4AE2  74 3B                     JZ 0x006d4b1f
006D4AE4  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006D4AE7  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
006D4AEA  8D 5F 04                  LEA EBX,[EDI + 0x4]
006D4AED  3B D9                     CMP EBX,ECX
006D4AEF  76 1B                     JBE 0x006d4b0c
006D4AF1  8B C7                     MOV EAX,EDI
006D4AF3  2B C1                     SUB EAX,ECX
006D4AF5  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
006D4AF8  83 C0 04                  ADD EAX,0x4
006D4AFB  3B C1                     CMP EAX,ECX
006D4AFD  73 02                     JNC 0x006d4b01
006D4AFF  8B C1                     MOV EAX,ECX
LAB_006d4b01:
006D4B01  50                        PUSH EAX
006D4B02  56                        PUSH ESI
006D4B03  E8 38 FC FF FF            CALL 0x006d4740
006D4B08  85 C0                     TEST EAX,EAX
006D4B0A  75 15                     JNZ 0x006d4b21
LAB_006d4b0c:
006D4B0C  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
006D4B0F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D4B12  89 14 39                  MOV dword ptr [ECX + EDI*0x1],EDX
006D4B15  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006D4B18  3B C3                     CMP EAX,EBX
006D4B1A  73 03                     JNC 0x006d4b1f
006D4B1C  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
LAB_006d4b1f:
006D4B1F  33 C0                     XOR EAX,EAX
LAB_006d4b21:
006D4B21  5F                        POP EDI
006D4B22  5B                        POP EBX
006D4B23  5E                        POP ESI
006D4B24  5D                        POP EBP
006D4B25  C2 0C 00                  RET 0xc
