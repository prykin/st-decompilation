FUN_004dea90:
004DEA90  55                        PUSH EBP
004DEA91  8B EC                     MOV EBP,ESP
004DEA93  53                        PUSH EBX
004DEA94  56                        PUSH ESI
004DEA95  8B F1                     MOV ESI,ECX
004DEA97  57                        PUSH EDI
004DEA98  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DEA9E  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004DEAA4  50                        PUSH EAX
004DEAA5  E8 0D 5F F2 FF            CALL 0x004049b7
004DEAAA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004DEAAD  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
004DEAB3  25 FF 00 00 00            AND EAX,0xff
004DEAB8  48                        DEC EAX
004DEAB9  83 FA 0E                  CMP EDX,0xe
004DEABC  74 45                     JZ 0x004deb03
004DEABE  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004DEAC4  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004DEACB  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004DEACE  03 D7                     ADD EDX,EDI
004DEAD0  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004DEAD3  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004DEAD6  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
LAB_004dead9:
004DEAD9  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004DEADC  89 13                     MOV dword ptr [EBX],EDX
004DEADE  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004DEAE4  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004DEAE7  03 F0                     ADD ESI,EAX
004DEAE9  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004DEAF0  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004DEAF3  5F                        POP EDI
004DEAF4  5E                        POP ESI
004DEAF5  5B                        POP EBX
004DEAF6  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
004DEAFA  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004DEAFD  89 0A                     MOV dword ptr [EDX],ECX
004DEAFF  5D                        POP EBP
004DEB00  C2 10 00                  RET 0x10
LAB_004deb03:
004DEB03  83 BE 61 03 00 00 06      CMP dword ptr [ESI + 0x361],0x6
004DEB0A  75 1E                     JNZ 0x004deb2a
004DEB0C  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004DEB12  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004DEB19  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004DEB1C  03 D7                     ADD EDX,EDI
004DEB1E  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004DEB21  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004DEB24  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004DEB27  42                        INC EDX
004DEB28  EB AF                     JMP 0x004dead9
LAB_004deb2a:
004DEB2A  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004DEB30  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004DEB33  8B 0C 8D 70 51 7B 00      MOV ECX,dword ptr [ECX*0x4 + 0x7b5170]
004DEB3A  5F                        POP EDI
004DEB3B  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004DEB3E  03 F0                     ADD ESI,EAX
004DEB40  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
004DEB43  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004DEB46  5E                        POP ESI
004DEB47  5B                        POP EBX
004DEB48  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
004DEB4B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004DEB4E  89 02                     MOV dword ptr [EDX],EAX
004DEB50  89 01                     MOV dword ptr [ECX],EAX
004DEB52  5D                        POP EBP
004DEB53  C2 10 00                  RET 0x10
