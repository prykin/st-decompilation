FUN_00567060:
00567060  55                        PUSH EBP
00567061  8B EC                     MOV EBP,ESP
00567063  83 EC 50                  SUB ESP,0x50
00567066  53                        PUSH EBX
00567067  56                        PUSH ESI
00567068  57                        PUSH EDI
00567069  33 FF                     XOR EDI,EDI
0056706B  8B F1                     MOV ESI,ECX
0056706D  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00567070  E8 7B 23 1B 00            CALL 0x007193f0
00567075  A1 00 73 80 00            MOV EAX,[0x00807300]
0056707A  25 FF 00 00 00            AND EAX,0xff
0056707F  83 E8 02                  SUB EAX,0x2
00567082  0F 84 85 00 00 00         JZ 0x0056710d
00567088  83 E8 02                  SUB EAX,0x2
0056708B  74 09                     JZ 0x00567096
0056708D  83 E8 04                  SUB EAX,0x4
00567090  0F 85 97 00 00 00         JNZ 0x0056712d
LAB_00567096:
00567096  39 BE 8B 0F 00 00         CMP dword ptr [ESI + 0xf8b],EDI
0056709C  0F 84 8B 00 00 00         JZ 0x0056712d
005670A2  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005670A8  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005670AB  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
005670AF  BB 01 00 00 00            MOV EBX,0x1
LAB_005670b4:
005670B4  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
005670B7  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005670BA  8D 45 B0                  LEA EAX,[EBP + -0x50]
005670BD  6A 00                     PUSH 0x0
005670BF  51                        PUSH ECX
005670C0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005670C5  E8 26 67 1C 00            CALL 0x0072d7f0
005670CA  83 C4 08                  ADD ESP,0x8
005670CD  85 C0                     TEST EAX,EAX
005670CF  75 13                     JNZ 0x005670e4
005670D1  50                        PUSH EAX
005670D2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005670D5  8D 55 F8                  LEA EDX,[EBP + -0x8]
005670D8  25 FF 00 00 00            AND EAX,0xff
005670DD  52                        PUSH EDX
005670DE  50                        PUSH EAX
005670DF  E8 1C AE 15 00            CALL 0x006c1f00
LAB_005670e4:
005670E4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005670E7  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005670EA  3B C3                     CMP EAX,EBX
005670EC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005670F2  75 03                     JNZ 0x005670f7
005670F4  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_005670f7:
005670F7  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
005670FA  FE C0                     INC AL
005670FC  3A C3                     CMP AL,BL
005670FE  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00567101  76 B1                     JBE 0x005670b4
00567103  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00567106  5F                        POP EDI
00567107  5E                        POP ESI
00567108  5B                        POP EBX
00567109  8B E5                     MOV ESP,EBP
0056710B  5D                        POP EBP
0056710C  C3                        RET
LAB_0056710d:
0056710D  8B 8E 8F 0F 00 00         MOV ECX,dword ptr [ESI + 0xf8f]
00567113  8D 86 8F 0F 00 00         LEA EAX,[ESI + 0xf8f]
00567119  3B CF                     CMP ECX,EDI
0056711B  74 10                     JZ 0x0056712d
0056711D  50                        PUSH EAX
0056711E  E8 2D 25 1B 00            CALL 0x00719650
00567123  83 C4 04                  ADD ESP,0x4
00567126  5F                        POP EDI
00567127  5E                        POP ESI
00567128  5B                        POP EBX
00567129  8B E5                     MOV ESP,EBP
0056712B  5D                        POP EBP
0056712C  C3                        RET
LAB_0056712d:
0056712D  8B C7                     MOV EAX,EDI
0056712F  5F                        POP EDI
00567130  5E                        POP ESI
00567131  5B                        POP EBX
00567132  8B E5                     MOV ESP,EBP
00567134  5D                        POP EBP
00567135  C3                        RET
