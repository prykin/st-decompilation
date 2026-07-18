FUN_005599d0:
005599D0  55                        PUSH EBP
005599D1  8B EC                     MOV EBP,ESP
005599D3  51                        PUSH ECX
005599D4  8B 81 14 01 00 00         MOV EAX,dword ptr [ECX + 0x114]
005599DA  53                        PUSH EBX
005599DB  56                        PUSH ESI
005599DC  57                        PUSH EDI
005599DD  85 C0                     TEST EAX,EAX
005599DF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005599E2  0F 84 E1 00 00 00         JZ 0x00559ac9
005599E8  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
005599EB  85 F6                     TEST ESI,ESI
005599ED  0F 8C D6 00 00 00         JL 0x00559ac9
005599F3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005599F6  83 F8 08                  CMP EAX,0x8
005599F9  0F 83 CA 00 00 00         JNC 0x00559ac9
005599FF  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00559A05  85 D2                     TEST EDX,EDX
00559A07  74 11                     JZ 0x00559a1a
00559A09  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00559A0C  80 BC D2 E9 87 80 00 08   CMP byte ptr [EDX + EDX*0x8 + 0x8087e9],0x8
00559A14  0F 83 AF 00 00 00         JNC 0x00559ac9
LAB_00559a1a:
00559A1A  8B 54 81 54               MOV EDX,dword ptr [ECX + EAX*0x4 + 0x54]
00559A1E  85 D2                     TEST EDX,EDX
00559A20  0F 84 A3 00 00 00         JZ 0x00559ac9
00559A26  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00559A29  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00559A2C  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00559A2F  52                        PUSH EDX
00559A30  56                        PUSH ESI
00559A31  50                        PUSH EAX
00559A32  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00559A35  50                        PUSH EAX
00559A36  57                        PUSH EDI
00559A37  53                        PUSH EBX
00559A38  6A 02                     PUSH 0x2
00559A3A  E8 A6 81 EA FF            CALL 0x00401be5
00559A3F  8D 4C 36 01               LEA ECX,[ESI + ESI*0x1 + 0x1]
00559A43  2B DE                     SUB EBX,ESI
00559A45  56                        PUSH ESI
00559A46  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00559A49  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
00559A4C  2B FE                     SUB EDI,ESI
00559A4E  E8 6C 8E EA FF            CALL 0x004028bf
00559A53  8B C8                     MOV ECX,EAX
00559A55  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00559A58  83 C4 04                  ADD ESP,0x4
00559A5B  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00559A5E  85 C0                     TEST EAX,EAX
00559A60  7E 67                     JLE 0x00559ac9
00559A62  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
00559A65  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_00559a68:
00559A68  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00559A6B  33 C0                     XOR EAX,EAX
LAB_00559a6d:
00559A6D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00559A70  85 C9                     TEST ECX,ECX
00559A72  74 09                     JZ 0x00559a7d
00559A74  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00559A77  80 3C 02 00               CMP byte ptr [EDX + EAX*0x1],0x0
00559A7B  74 31                     JZ 0x00559aae
LAB_00559a7d:
00559A7D  85 F6                     TEST ESI,ESI
00559A7F  7C 2D                     JL 0x00559aae
00559A81  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00559A84  8B 4A 20                  MOV ECX,dword ptr [EDX + 0x20]
00559A87  3B F1                     CMP ESI,ECX
00559A89  7D 23                     JGE 0x00559aae
00559A8B  85 FF                     TEST EDI,EDI
00559A8D  7C 1F                     JL 0x00559aae
00559A8F  3B 7A 24                  CMP EDI,dword ptr [EDX + 0x24]
00559A92  7D 1A                     JGE 0x00559aae
00559A94  8B DF                     MOV EBX,EDI
00559A96  0F AF D9                  IMUL EBX,ECX
00559A99  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00559A9C  03 5C 8A 54               ADD EBX,dword ptr [EDX + ECX*0x4 + 0x54]
00559AA0  8A 0C 33                  MOV CL,byte ptr [EBX + ESI*0x1]
00559AA3  84 C9                     TEST CL,CL
00559AA5  8D 14 33                  LEA EDX,[EBX + ESI*0x1]
00559AA8  76 04                     JBE 0x00559aae
00559AAA  FE C9                     DEC CL
00559AAC  88 0A                     MOV byte ptr [EDX],CL
LAB_00559aae:
00559AAE  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00559AB1  40                        INC EAX
00559AB2  46                        INC ESI
00559AB3  3B C1                     CMP EAX,ECX
00559AB5  7C B6                     JL 0x00559a6d
00559AB7  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00559ABA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00559ABD  03 D1                     ADD EDX,ECX
00559ABF  47                        INC EDI
00559AC0  48                        DEC EAX
00559AC1  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
00559AC4  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00559AC7  75 9F                     JNZ 0x00559a68
LAB_00559ac9:
00559AC9  5F                        POP EDI
00559ACA  5E                        POP ESI
00559ACB  5B                        POP EBX
00559ACC  8B E5                     MOV ESP,EBP
00559ACE  5D                        POP EBP
00559ACF  C2 18 00                  RET 0x18
