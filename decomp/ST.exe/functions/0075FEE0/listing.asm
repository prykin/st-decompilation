FUN_0075fee0:
0075FEE0  55                        PUSH EBP
0075FEE1  8B EC                     MOV EBP,ESP
0075FEE3  83 EC 20                  SUB ESP,0x20
0075FEE6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075FEE9  57                        PUSH EDI
0075FEEA  8B B8 BA 01 00 00         MOV EDI,dword ptr [EAX + 0x1ba]
0075FEF0  8B 48 70                  MOV ECX,dword ptr [EAX + 0x70]
0075FEF3  8B 50 68                  MOV EDX,dword ptr [EAX + 0x68]
0075FEF6  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075FEF9  85 C0                     TEST EAX,EAX
0075FEFB  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0075FEFE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0075FF01  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0075FF04  0F 8E D4 00 00 00         JLE 0x0075ffde
0075FF0A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075FF0D  53                        PUSH EBX
0075FF0E  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0075FF11  56                        PUSH ESI
0075FF12  2B CB                     SUB ECX,EBX
0075FF14  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0075FF17  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0075FF1A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_0075ff1d:
0075FF1D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075FF20  8B 0B                     MOV ECX,dword ptr [EBX]
0075FF22  50                        PUSH EAX
0075FF23  51                        PUSH ECX
0075FF24  E8 07 A0 FF FF            CALL 0x00759f30
0075FF29  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075FF2C  8B 77 30                  MOV ESI,dword ptr [EDI + 0x30]
0075FF2F  33 D2                     XOR EDX,EDX
0075FF31  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
0075FF34  85 C0                     TEST EAX,EAX
0075FF36  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0075FF39  0F 8E 83 00 00 00         JLE 0x0075ffc2
0075FF3F  C1 E6 06                  SHL ESI,0x6
0075FF42  8D 47 34                  LEA EAX,[EDI + 0x34]
0075FF45  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0075FF48  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0075FF4B  EB 06                     JMP 0x0075ff53
LAB_0075ff4d:
0075FF4D  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0075FF50  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0075ff53:
0075FF53  8B 7F 18                  MOV EDI,dword ptr [EDI + 0x18]
0075FF56  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0075FF59  8B 3C 97                  MOV EDI,dword ptr [EDI + EDX*0x4]
0075FF5C  8B 04 19                  MOV EAX,dword ptr [ECX + EBX*0x1]
0075FF5F  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0075FF62  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0075FF65  8B 0B                     MOV ECX,dword ptr [EBX]
0075FF67  03 C2                     ADD EAX,EDX
0075FF69  8B 3F                     MOV EDI,dword ptr [EDI]
0075FF6B  03 FE                     ADD EDI,ESI
0075FF6D  33 F6                     XOR ESI,ESI
0075FF6F  39 75 08                  CMP dword ptr [EBP + 0x8],ESI
0075FF72  76 34                     JBE 0x0075ffa8
0075FF74  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075FF77  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
LAB_0075ff7a:
0075FF7A  8B 1C B7                  MOV EBX,dword ptr [EDI + ESI*0x4]
0075FF7D  33 D2                     XOR EDX,EDX
0075FF7F  8A 10                     MOV DL,byte ptr [EAX]
0075FF81  03 DA                     ADD EBX,EDX
0075FF83  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0075FF86  8A 14 13                  MOV DL,byte ptr [EBX + EDX*0x1]
0075FF89  8A 19                     MOV BL,byte ptr [ECX]
0075FF8B  02 DA                     ADD BL,DL
0075FF8D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0075FF90  88 19                     MOV byte ptr [ECX],BL
0075FF92  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0075FF95  03 C3                     ADD EAX,EBX
0075FF97  41                        INC ECX
0075FF98  46                        INC ESI
0075FF99  83 E6 0F                  AND ESI,0xf
0075FF9C  4A                        DEC EDX
0075FF9D  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0075FFA0  75 D8                     JNZ 0x0075ff7a
0075FFA2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075FFA5  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_0075ffa8:
0075FFA8  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0075FFAB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075FFAE  42                        INC EDX
0075FFAF  83 C1 04                  ADD ECX,0x4
0075FFB2  3B D0                     CMP EDX,EAX
0075FFB4  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0075FFB7  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
0075FFBA  7C 91                     JL 0x0075ff4d
0075FFBC  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0075FFBF  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
LAB_0075ffc2:
0075FFC2  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0075FFC5  46                        INC ESI
0075FFC6  83 E6 0F                  AND ESI,0xf
0075FFC9  83 C3 04                  ADD EBX,0x4
0075FFCC  48                        DEC EAX
0075FFCD  89 77 30                  MOV dword ptr [EDI + 0x30],ESI
0075FFD0  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0075FFD3  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0075FFD6  0F 85 41 FF FF FF         JNZ 0x0075ff1d
0075FFDC  5E                        POP ESI
0075FFDD  5B                        POP EBX
LAB_0075ffde:
0075FFDE  5F                        POP EDI
0075FFDF  8B E5                     MOV ESP,EBP
0075FFE1  5D                        POP EBP
0075FFE2  C2 10 00                  RET 0x10
