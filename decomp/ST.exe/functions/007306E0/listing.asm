FUN_007306e0:
007306E0  55                        PUSH EBP
007306E1  8B EC                     MOV EBP,ESP
007306E3  83 EC 10                  SUB ESP,0x10
007306E6  83 3D 10 72 85 00 00      CMP dword ptr [0x00857210],0x0
007306ED  75 1D                     JNZ 0x0073070c
007306EF  83 7D 08 41               CMP dword ptr [EBP + 0x8],0x41
007306F3  7C 0F                     JL 0x00730704
007306F5  83 7D 08 5A               CMP dword ptr [EBP + 0x8],0x5a
007306F9  7F 09                     JG 0x00730704
007306FB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007306FE  83 C0 20                  ADD EAX,0x20
00730701  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_00730704:
00730704  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00730707  E9 FB 00 00 00            JMP 0x00730807
LAB_0073070c:
0073070C  81 7D 08 00 01 00 00      CMP dword ptr [EBP + 0x8],0x100
00730713  7D 3E                     JGE 0x00730753
00730715  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
0073071C  7E 13                     JLE 0x00730731
0073071E  6A 01                     PUSH 0x1
00730720  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00730723  51                        PUSH ECX
00730724  E8 E7 FE FF FF            CALL 0x00730610
00730729  83 C4 08                  ADD ESP,0x8
0073072C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0073072F  EB 14                     JMP 0x00730745
LAB_00730731:
00730731  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00730734  A1 80 12 7F 00            MOV EAX,[0x007f1280]
00730739  33 C9                     XOR ECX,ECX
0073073B  66 8B 0C 50               MOV CX,word ptr [EAX + EDX*0x2]
0073073F  83 E1 01                  AND ECX,0x1
00730742  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_00730745:
00730745  83 7D F0 00               CMP dword ptr [EBP + -0x10],0x0
00730749  75 08                     JNZ 0x00730753
0073074B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073074E  E9 B4 00 00 00            JMP 0x00730807
LAB_00730753:
00730753  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00730756  C1 FA 08                  SAR EDX,0x8
00730759  81 E2 FF 00 00 00         AND EDX,0xff
0073075F  81 E2 FF 00 00 00         AND EDX,0xff
00730765  A1 80 12 7F 00            MOV EAX,[0x007f1280]
0073076A  33 C9                     XOR ECX,ECX
0073076C  66 8B 0C 50               MOV CX,word ptr [EAX + EDX*0x2]
00730770  81 E1 00 80 00 00         AND ECX,0x8000
00730776  85 C9                     TEST ECX,ECX
00730778  74 22                     JZ 0x0073079c
0073077A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073077D  C1 FA 08                  SAR EDX,0x8
00730780  81 E2 FF 00 00 00         AND EDX,0xff
00730786  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
00730789  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
0073078C  88 45 F9                  MOV byte ptr [EBP + -0x7],AL
0073078F  C6 45 FA 00               MOV byte ptr [EBP + -0x6],0x0
00730793  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
0073079A  EB 11                     JMP 0x007307ad
LAB_0073079c:
0073079C  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
0073079F  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
007307A2  C6 45 F9 00               MOV byte ptr [EBP + -0x7],0x0
007307A6  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_007307ad:
007307AD  6A 01                     PUSH 0x1
007307AF  6A 00                     PUSH 0x0
007307B1  6A 03                     PUSH 0x3
007307B3  8D 55 F4                  LEA EDX,[EBP + -0xc]
007307B6  52                        PUSH EDX
007307B7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007307BA  50                        PUSH EAX
007307BB  8D 4D F8                  LEA ECX,[EBP + -0x8]
007307BE  51                        PUSH ECX
007307BF  68 00 01 00 00            PUSH 0x100
007307C4  8B 15 10 72 85 00         MOV EDX,dword ptr [0x00857210]
007307CA  52                        PUSH EDX
007307CB  E8 40 C2 00 00            CALL 0x0073ca10
007307D0  83 C4 20                  ADD ESP,0x20
007307D3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007307D6  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
007307DA  75 05                     JNZ 0x007307e1
007307DC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007307DF  EB 26                     JMP 0x00730807
LAB_007307e1:
007307E1  83 7D FC 01               CMP dword ptr [EBP + -0x4],0x1
007307E5  75 0A                     JNZ 0x007307f1
007307E7  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007307EA  25 FF 00 00 00            AND EAX,0xff
007307EF  EB 16                     JMP 0x00730807
LAB_007307f1:
007307F1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007307F4  25 FF 00 00 00            AND EAX,0xff
007307F9  8B 4D F5                  MOV ECX,dword ptr [EBP + -0xb]
007307FC  81 E1 FF 00 00 00         AND ECX,0xff
00730802  C1 E1 08                  SHL ECX,0x8
00730805  0B C1                     OR EAX,ECX
LAB_00730807:
00730807  8B E5                     MOV ESP,EBP
00730809  5D                        POP EBP
0073080A  C3                        RET
