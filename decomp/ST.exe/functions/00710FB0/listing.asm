FUN_00710fb0:
00710FB0  55                        PUSH EBP
00710FB1  8B EC                     MOV EBP,ESP
00710FB3  51                        PUSH ECX
00710FB4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00710FB7  53                        PUSH EBX
00710FB8  56                        PUSH ESI
00710FB9  8B F1                     MOV ESI,ECX
00710FBB  8A 08                     MOV CL,byte ptr [EAX]
00710FBD  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00710FC4  8B 86 96 00 00 00         MOV EAX,dword ptr [ESI + 0x96]
00710FCA  57                        PUSH EDI
00710FCB  48                        DEC EAX
00710FCC  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
00710FCF  74 14                     JZ 0x00710fe5
00710FD1  48                        DEC EAX
00710FD2  75 25                     JNZ 0x00710ff9
00710FD4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00710FD7  81 E2 FF 00 00 00         AND EDX,0xff
00710FDD  52                        PUSH EDX
00710FDE  E8 FD F6 01 00            CALL 0x007306e0
00710FE3  EB 0E                     JMP 0x00710ff3
LAB_00710fe5:
00710FE5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00710FE8  25 FF 00 00 00            AND EAX,0xff
00710FED  50                        PUSH EAX
00710FEE  E8 3D 30 02 00            CALL 0x00734030
LAB_00710ff3:
00710FF3  83 C4 04                  ADD ESP,0x4
00710FF6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00710ff9:
00710FF9  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
00710FFF  85 C0                     TEST EAX,EAX
00711001  74 23                     JZ 0x00711026
00711003  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
00711009  85 C0                     TEST EAX,EAX
0071100B  74 19                     JZ 0x00711026
0071100D  8B 8E AC 00 00 00         MOV ECX,dword ptr [ESI + 0xac]
00711013  8B 90 AC 00 00 00         MOV EDX,dword ptr [EAX + 0xac]
00711019  3B CA                     CMP ECX,EDX
0071101B  74 09                     JZ 0x00711026
0071101D  56                        PUSH ESI
0071101E  E8 6D F7 FF FF            CALL 0x00710790
00711023  83 C4 04                  ADD ESP,0x4
LAB_00711026:
00711026  66 8B 46 70               MOV AX,word ptr [ESI + 0x70]
0071102A  8B 96 9A 00 00 00         MOV EDX,dword ptr [ESI + 0x9a]
00711030  8B C8                     MOV ECX,EAX
00711032  66 8B 7D FC               MOV DI,word ptr [EBP + -0x4]
00711036  81 E1 FF FF 00 00         AND ECX,0xffff
0071103C  83 C1 0B                  ADD ECX,0xb
0071103F  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00711042  66 39 3C 4A               CMP word ptr [EDX + ECX*0x2],DI
00711046  0F 84 AB 00 00 00         JZ 0x007110f7
0071104C  66 8B 5A 64               MOV BX,word ptr [EDX + 0x64]
LAB_00711050:
00711050  40                        INC EAX
00711051  66 3B C3                  CMP AX,BX
00711054  72 02                     JC 0x00711058
00711056  33 C0                     XOR EAX,EAX
LAB_00711058:
00711058  66 3B 46 70               CMP AX,word ptr [ESI + 0x70]
0071105C  74 21                     JZ 0x0071107f
0071105E  8B C8                     MOV ECX,EAX
00711060  81 E1 FF FF 00 00         AND ECX,0xffff
00711066  83 C1 0B                  ADD ECX,0xb
00711069  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0071106C  66 39 3C 4A               CMP word ptr [EDX + ECX*0x2],DI
00711070  75 DE                     JNZ 0x00711050
00711072  66 89 46 70               MOV word ptr [ESI + 0x70],AX
00711076  5F                        POP EDI
00711077  5E                        POP ESI
00711078  5B                        POP EBX
00711079  8B E5                     MOV ESP,EBP
0071107B  5D                        POP EBP
0071107C  C2 04 00                  RET 0x4
LAB_0071107f:
0071107F  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
00711085  85 C0                     TEST EAX,EAX
00711087  75 2F                     JNZ 0x007110b8
00711089  F6 86 8D 01 00 00 08      TEST byte ptr [ESI + 0x18d],0x8
00711090  74 63                     JZ 0x007110f5
00711092  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00711095  6A 00                     PUSH 0x0
00711097  52                        PUSH EDX
00711098  56                        PUSH ESI
00711099  E8 92 CF FF FF            CALL 0x0070e030
0071109E  83 C4 0C                  ADD ESP,0xc
007110A1  33 C9                     XOR ECX,ECX
007110A3  85 C0                     TEST EAX,EAX
007110A5  0F 9E C1                  SETLE CL
007110A8  49                        DEC ECX
007110A9  5F                        POP EDI
007110AA  23 C1                     AND EAX,ECX
007110AC  66 89 46 70               MOV word ptr [ESI + 0x70],AX
007110B0  5E                        POP ESI
007110B1  5B                        POP EBX
007110B2  8B E5                     MOV ESP,EBP
007110B4  5D                        POP EBP
007110B5  C2 04 00                  RET 0x4
LAB_007110b8:
007110B8  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
007110BE  F6 80 8D 01 00 00 08      TEST byte ptr [EAX + 0x18d],0x8
007110C5  74 2E                     JZ 0x007110f5
007110C7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007110CA  6A 00                     PUSH 0x0
007110CC  52                        PUSH EDX
007110CD  50                        PUSH EAX
007110CE  E8 5D CF FF FF            CALL 0x0070e030
007110D3  56                        PUSH ESI
007110D4  8B F8                     MOV EDI,EAX
007110D6  E8 B5 F6 FF FF            CALL 0x00710790
007110DB  83 C4 10                  ADD ESP,0x10
007110DE  33 C0                     XOR EAX,EAX
007110E0  85 FF                     TEST EDI,EDI
007110E2  0F 9E C0                  SETLE AL
007110E5  48                        DEC EAX
007110E6  23 C7                     AND EAX,EDI
007110E8  5F                        POP EDI
007110E9  66 89 46 70               MOV word ptr [ESI + 0x70],AX
007110ED  5E                        POP ESI
007110EE  5B                        POP EBX
007110EF  8B E5                     MOV ESP,EBP
007110F1  5D                        POP EBP
007110F2  C2 04 00                  RET 0x4
LAB_007110f5:
007110F5  33 C0                     XOR EAX,EAX
LAB_007110f7:
007110F7  66 89 46 70               MOV word ptr [ESI + 0x70],AX
007110FB  5F                        POP EDI
007110FC  5E                        POP ESI
007110FD  5B                        POP EBX
007110FE  8B E5                     MOV ESP,EBP
00711100  5D                        POP EBP
00711101  C2 04 00                  RET 0x4
