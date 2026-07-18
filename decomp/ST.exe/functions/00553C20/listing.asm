FUN_00553c20:
00553C20  55                        PUSH EBP
00553C21  8B EC                     MOV EBP,ESP
00553C23  83 EC 0C                  SUB ESP,0xc
00553C26  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00553C29  53                        PUSH EBX
00553C2A  85 C0                     TEST EAX,EAX
00553C2C  56                        PUSH ESI
00553C2D  0F 84 BA 00 00 00         JZ 0x00553ced
00553C33  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00553C36  56                        PUSH ESI
00553C37  E8 83 EC EA FF            CALL 0x004028bf
00553C3C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00553C3F  8B D8                     MOV EBX,EAX
00553C41  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00553C44  8D 54 36 01               LEA EDX,[ESI + ESI*0x1 + 0x1]
00553C48  83 C4 04                  ADD ESP,0x4
00553C4B  2B CE                     SUB ECX,ESI
00553C4D  2B C6                     SUB EAX,ESI
00553C4F  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00553C52  85 D2                     TEST EDX,EDX
00553C54  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00553C57  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00553C5A  0F 8E 8D 00 00 00         JLE 0x00553ced
00553C60  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00553C63  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00553C66  57                        PUSH EDI
00553C67  8B F8                     MOV EDI,EAX
00553C69  0F AF C3                  IMUL EAX,EBX
00553C6C  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00553C6F  03 C1                     ADD EAX,ECX
00553C71  03 C6                     ADD EAX,ESI
00553C73  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00553C76  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00553C79  33 F6                     XOR ESI,ESI
00553C7B  EB 0A                     JMP 0x00553c87
LAB_00553c7d:
00553C7D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00553C80  33 F6                     XOR ESI,ESI
00553C82  EB 03                     JMP 0x00553c87
LAB_00553c84:
00553C84  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_00553c87:
00553C87  8D 04 0E                  LEA EAX,[ESI + ECX*0x1]
00553C8A  85 C0                     TEST EAX,EAX
00553C8C  7C 19                     JL 0x00553ca7
00553C8E  3B C3                     CMP EAX,EBX
00553C90  7D 15                     JGE 0x00553ca7
00553C92  85 FF                     TEST EDI,EDI
00553C94  7C 11                     JL 0x00553ca7
00553C96  3B 7D 18                  CMP EDI,dword ptr [EBP + 0x18]
00553C99  7D 0C                     JGE 0x00553ca7
00553C9B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00553C9E  33 C9                     XOR ECX,ECX
00553CA0  8A 0C 32                  MOV CL,byte ptr [EDX + ESI*0x1]
00553CA3  85 C9                     TEST ECX,ECX
00553CA5  74 23                     JZ 0x00553cca
LAB_00553ca7:
00553CA7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00553CAA  85 C9                     TEST ECX,ECX
00553CAC  74 09                     JZ 0x00553cb7
00553CAE  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00553CB1  80 3C 31 00               CMP byte ptr [ECX + ESI*0x1],0x0
00553CB5  74 13                     JZ 0x00553cca
LAB_00553cb7:
00553CB7  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00553CBA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00553CBD  52                        PUSH EDX
00553CBE  53                        PUSH EBX
00553CBF  51                        PUSH ECX
00553CC0  57                        PUSH EDI
00553CC1  50                        PUSH EAX
00553CC2  E8 6E 11 EB FF            CALL 0x00404e35
00553CC7  83 C4 14                  ADD ESP,0x14
LAB_00553cca:
00553CCA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00553CCD  46                        INC ESI
00553CCE  3B F0                     CMP ESI,EAX
00553CD0  7C B2                     JL 0x00553c84
00553CD2  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00553CD5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00553CD8  03 F0                     ADD ESI,EAX
00553CDA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00553CDD  47                        INC EDI
00553CDE  03 CB                     ADD ECX,EBX
00553CE0  48                        DEC EAX
00553CE1  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
00553CE4  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00553CE7  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00553CEA  75 91                     JNZ 0x00553c7d
00553CEC  5F                        POP EDI
LAB_00553ced:
00553CED  5E                        POP ESI
00553CEE  5B                        POP EBX
00553CEF  8B E5                     MOV ESP,EBP
00553CF1  5D                        POP EBP
00553CF2  C3                        RET
