FUN_00621a70:
00621A70  55                        PUSH EBP
00621A71  8B EC                     MOV EBP,ESP
00621A73  83 EC 08                  SUB ESP,0x8
00621A76  53                        PUSH EBX
00621A77  57                        PUSH EDI
00621A78  8B F9                     MOV EDI,ECX
00621A7A  33 DB                     XOR EBX,EBX
00621A7C  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00621A7F  8B 87 0A 01 00 00         MOV EAX,dword ptr [EDI + 0x10a]
00621A85  3B C3                     CMP EAX,EBX
00621A87  0F 84 86 00 00 00         JZ 0x00621b13
00621A8D  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00621A90  3B C3                     CMP EAX,EBX
00621A92  7E 7F                     JLE 0x00621b13
00621A94  56                        PUSH ESI
00621A95  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00621a98:
00621A98  8B 87 0A 01 00 00         MOV EAX,dword ptr [EDI + 0x10a]
00621A9E  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
00621AA1  73 5F                     JNC 0x00621b02
00621AA3  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00621AA6  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00621AA9  0F AF F3                  IMUL ESI,EBX
00621AAC  03 F1                     ADD ESI,ECX
00621AAE  85 F6                     TEST ESI,ESI
00621AB0  74 50                     JZ 0x00621b02
00621AB2  8A 87 05 01 00 00         MOV AL,byte ptr [EDI + 0x105]
00621AB8  84 C0                     TEST AL,AL
00621ABA  74 25                     JZ 0x00621ae1
00621ABC  80 3E 00                  CMP byte ptr [ESI],0x0
00621ABF  75 20                     JNZ 0x00621ae1
00621AC1  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00621AC6  8B 97 06 01 00 00         MOV EDX,dword ptr [EDI + 0x106]
00621ACC  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00621AD2  2B CA                     SUB ECX,EDX
00621AD4  83 F9 0A                  CMP ECX,0xa
00621AD7  72 08                     JC 0x00621ae1
00621AD9  53                        PUSH EBX
00621ADA  8B CF                     MOV ECX,EDI
00621ADC  E8 92 F5 DD FF            CALL 0x00401073
LAB_00621ae1:
00621AE1  81 7E 01 DC 05 00 00      CMP dword ptr [ESI + 0x1],0x5dc
00621AE8  76 0F                     JBE 0x00621af9
00621AEA  8B 97 0A 01 00 00         MOV EDX,dword ptr [EDI + 0x10a]
00621AF0  53                        PUSH EBX
00621AF1  52                        PUSH EDX
00621AF2  E8 79 F1 08 00            CALL 0x006b0c70
00621AF7  EB 01                     JMP 0x00621afa
LAB_00621af9:
00621AF9  43                        INC EBX
LAB_00621afa:
00621AFA  80 3E 00                  CMP byte ptr [ESI],0x0
00621AFD  74 03                     JZ 0x00621b02
00621AFF  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_00621b02:
00621B02  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00621B05  48                        DEC EAX
00621B06  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00621B09  75 8D                     JNZ 0x00621a98
00621B0B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00621B0E  5E                        POP ESI
00621B0F  85 C0                     TEST EAX,EAX
00621B11  75 07                     JNZ 0x00621b1a
LAB_00621b13:
00621B13  C6 87 05 01 00 00 00      MOV byte ptr [EDI + 0x105],0x0
LAB_00621b1a:
00621B1A  5F                        POP EDI
00621B1B  5B                        POP EBX
00621B1C  8B E5                     MOV ESP,EBP
00621B1E  5D                        POP EBP
00621B1F  C3                        RET
