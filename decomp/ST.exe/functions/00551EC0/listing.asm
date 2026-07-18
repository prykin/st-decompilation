FUN_00551ec0:
00551EC0  55                        PUSH EBP
00551EC1  8B EC                     MOV EBP,ESP
00551EC3  83 EC 50                  SUB ESP,0x50
00551EC6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00551ECB  53                        PUSH EBX
00551ECC  56                        PUSH ESI
00551ECD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00551ED0  57                        PUSH EDI
00551ED1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00551ED4  8D 4D B0                  LEA ECX,[EBP + -0x50]
00551ED7  6A 00                     PUSH 0x0
00551ED9  52                        PUSH EDX
00551EDA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00551EDD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00551EE3  E8 08 B9 1D 00            CALL 0x0072d7f0
00551EE8  8B F0                     MOV ESI,EAX
00551EEA  83 C4 08                  ADD ESP,0x8
00551EED  85 F6                     TEST ESI,ESI
00551EEF  0F 85 8E 01 00 00         JNZ 0x00552083
00551EF5  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00551EF8  33 C9                     XOR ECX,ECX
00551EFA  8A 86 D0 01 00 00         MOV AL,byte ptr [ESI + 0x1d0]
00551F00  8D 9E 8D 01 00 00         LEA EBX,[ESI + 0x18d]
00551F06  66 8B 8C 46 BC 01 00 00   MOV CX,word ptr [ESI + EAX*0x2 + 0x1bc]
00551F0E  51                        PUSH ECX
00551F0F  68 FC 28 7C 00            PUSH 0x7c28fc
00551F14  53                        PUSH EBX
00551F15  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00551F1B  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
00551F1E  83 C4 0C                  ADD ESP,0xc
00551F21  8B 8E DD 01 00 00         MOV ECX,dword ptr [ESI + 0x1dd]
00551F27  6A 0C                     PUSH 0xc
00551F29  6A 23                     PUSH 0x23
00551F2B  6A 36                     PUSH 0x36
00551F2D  6A 67                     PUSH 0x67
00551F2F  6A 00                     PUSH 0x0
00551F31  52                        PUSH EDX
00551F32  E8 59 EB 1B 00            CALL 0x00710a90
00551F37  8A 86 D0 01 00 00         MOV AL,byte ptr [ESI + 0x1d0]
00551F3D  8B 8E DD 01 00 00         MOV ECX,dword ptr [ESI + 0x1dd]
00551F43  F6 D8                     NEG AL
00551F45  1B C0                     SBB EAX,EAX
00551F47  83 E0 02                  AND EAX,0x2
00551F4A  50                        PUSH EAX
00551F4B  6A FF                     PUSH -0x1
00551F4D  6A FF                     PUSH -0x1
00551F4F  53                        PUSH EBX
00551F50  E8 6B FA 1B 00            CALL 0x007119c0
00551F55  8A 86 BB 01 00 00         MOV AL,byte ptr [ESI + 0x1bb]
00551F5B  84 C0                     TEST AL,AL
00551F5D  0F 85 10 01 00 00         JNZ 0x00552073
00551F63  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00551F6A  BF B4 00 00 00            MOV EDI,0xb4
00551F6F  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
LAB_00551f76:
00551F76  6A 00                     PUSH 0x0
00551F78  6A 00                     PUSH 0x0
00551F7A  6A 01                     PUSH 0x1
00551F7C  6A 00                     PUSH 0x0
00551F7E  6A FF                     PUSH -0x1
00551F80  6A 00                     PUSH 0x0
00551F82  68 4C 87 7C 00            PUSH 0x7c874c
00551F87  E8 F0 37 EB FF            CALL 0x0040577c
00551F8C  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
00551F92  83 C4 08                  ADD ESP,0x8
00551F95  50                        PUSH EAX
00551F96  6A 01                     PUSH 0x1
00551F98  51                        PUSH ECX
00551F99  E8 52 7B 1B 00            CALL 0x00709af0
00551F9E  50                        PUSH EAX
00551F9F  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00551FA2  6A 01                     PUSH 0x1
00551FA4  8D 57 FD                  LEA EDX,[EDI + -0x3]
00551FA7  6A 45                     PUSH 0x45
00551FA9  52                        PUSH EDX
00551FAA  50                        PUSH EAX
00551FAB  E8 79 12 EB FF            CALL 0x00403229
00551FB0  8A 96 D0 01 00 00         MOV DL,byte ptr [ESI + 0x1d0]
00551FB6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00551FB9  8B C2                     MOV EAX,EDX
00551FBB  83 C4 34                  ADD ESP,0x34
00551FBE  25 FF 00 00 00            AND EAX,0xff
00551FC3  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
00551FC6  66 8B 8C 8E AD 01 00 00   MOV CX,word ptr [ESI + ECX*0x4 + 0x1ad]
00551FCE  66 85 C9                  TEST CX,CX
00551FD1  74 3B                     JZ 0x0055200e
00551FD3  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
00551FDA  75 1B                     JNZ 0x00551ff7
00551FDC  84 D2                     TEST DL,DL
00551FDE  75 17                     JNZ 0x00551ff7
00551FE0  33 D2                     XOR EDX,EDX
00551FE2  81 E1 FF FF 00 00         AND ECX,0xffff
00551FE8  66 8B 94 46 BC 01 00 00   MOV DX,word ptr [ESI + EAX*0x2 + 0x1bc]
00551FF0  8B C2                     MOV EAX,EDX
00551FF2  0F AF C1                  IMUL EAX,ECX
00551FF5  EB 19                     JMP 0x00552010
LAB_00551ff7:
00551FF7  33 D2                     XOR EDX,EDX
00551FF9  81 E1 FF FF 00 00         AND ECX,0xffff
00551FFF  66 8B 94 46 BC 01 00 00   MOV DX,word ptr [ESI + EAX*0x2 + 0x1bc]
00552007  8B C2                     MOV EAX,EDX
00552009  99                        CDQ
0055200A  F7 F9                     IDIV ECX
0055200C  EB 02                     JMP 0x00552010
LAB_0055200e:
0055200E  33 C0                     XOR EAX,EAX
LAB_00552010:
00552010  50                        PUSH EAX
00552011  68 FC 28 7C 00            PUSH 0x7c28fc
00552016  53                        PUSH EBX
00552017  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0055201D  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00552020  83 C4 0C                  ADD ESP,0xc
00552023  8B 8E DD 01 00 00         MOV ECX,dword ptr [ESI + 0x1dd]
00552029  6A 0C                     PUSH 0xc
0055202B  6A 23                     PUSH 0x23
0055202D  6A 48                     PUSH 0x48
0055202F  57                        PUSH EDI
00552030  6A 00                     PUSH 0x0
00552032  50                        PUSH EAX
00552033  E8 58 EA 1B 00            CALL 0x00710a90
00552038  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0055203E  80 E9 03                  SUB CL,0x3
00552041  F6 D9                     NEG CL
00552043  1B C9                     SBB ECX,ECX
00552045  83 E1 FC                  AND ECX,0xfffffffc
00552048  83 C1 05                  ADD ECX,0x5
0055204B  51                        PUSH ECX
0055204C  8B 8E DD 01 00 00         MOV ECX,dword ptr [ESI + 0x1dd]
00552052  6A FF                     PUSH -0x1
00552054  6A FF                     PUSH -0x1
00552056  53                        PUSH EBX
00552057  E8 64 F9 1B 00            CALL 0x007119c0
0055205C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055205F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00552062  42                        INC EDX
00552063  83 C7 39                  ADD EDI,0x39
00552066  48                        DEC EAX
00552067  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0055206A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0055206D  0F 85 03 FF FF FF         JNZ 0x00551f76
LAB_00552073:
00552073  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00552076  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0055207C  5F                        POP EDI
0055207D  5E                        POP ESI
0055207E  5B                        POP EBX
0055207F  8B E5                     MOV ESP,EBP
00552081  5D                        POP EBP
00552082  C3                        RET
LAB_00552083:
00552083  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00552086  68 28 87 7C 00            PUSH 0x7c8728
0055208B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00552090  56                        PUSH ESI
00552091  6A 00                     PUSH 0x0
00552093  68 11 01 00 00            PUSH 0x111
00552098  68 24 86 7C 00            PUSH 0x7c8624
0055209D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005520A2  E8 29 B4 15 00            CALL 0x006ad4d0
005520A7  83 C4 18                  ADD ESP,0x18
005520AA  85 C0                     TEST EAX,EAX
005520AC  74 01                     JZ 0x005520af
005520AE  CC                        INT3
LAB_005520af:
005520AF  68 11 01 00 00            PUSH 0x111
005520B4  68 24 86 7C 00            PUSH 0x7c8624
005520B9  6A 00                     PUSH 0x0
005520BB  56                        PUSH ESI
005520BC  E8 7F 3D 15 00            CALL 0x006a5e40
005520C1  5F                        POP EDI
005520C2  5E                        POP ESI
005520C3  5B                        POP EBX
005520C4  8B E5                     MOV ESP,EBP
005520C6  5D                        POP EBP
005520C7  C3                        RET
