FUN_004c7070:
004C7070  55                        PUSH EBP
004C7071  8B EC                     MOV EBP,ESP
004C7073  51                        PUSH ECX
004C7074  8B 91 DC 03 00 00         MOV EDX,dword ptr [ECX + 0x3dc]
004C707A  53                        PUSH EBX
004C707B  33 C0                     XOR EAX,EAX
004C707D  56                        PUSH ESI
004C707E  85 D2                     TEST EDX,EDX
004C7080  57                        PUSH EDI
004C7081  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004C7084  0F 85 08 01 00 00         JNZ 0x004c7192
004C708A  8B 91 B8 05 00 00         MOV EDX,dword ptr [ECX + 0x5b8]
004C7090  85 D2                     TEST EDX,EDX
004C7092  75 0E                     JNZ 0x004c70a2
LAB_004c7094:
004C7094  5F                        POP EDI
004C7095  5E                        POP ESI
004C7096  B8 01 00 00 00            MOV EAX,0x1
004C709B  5B                        POP EBX
004C709C  8B E5                     MOV ESP,EBP
004C709E  5D                        POP EBP
004C709F  C2 04 00                  RET 0x4
LAB_004c70a2:
004C70A2  4A                        DEC EDX
004C70A3  85 D2                     TEST EDX,EDX
004C70A5  0F 8C E7 00 00 00         JL 0x004c7192
004C70AB  66 8B B1 B4 05 00 00      MOV SI,word ptr [ECX + 0x5b4]
004C70B2  66 8B B9 B0 05 00 00      MOV DI,word ptr [ECX + 0x5b0]
LAB_004c70b9:
004C70B9  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
004C70BF  66 85 FF                  TEST DI,DI
004C70C2  0F 8C D3 00 00 00         JL 0x004c719b
004C70C8  66 3B F8                  CMP DI,AX
004C70CB  7D 44                     JGE 0x004c7111
004C70CD  66 85 F6                  TEST SI,SI
004C70D0  7C 3F                     JL 0x004c7111
004C70D2  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
004C70D9  7D 36                     JGE 0x004c7111
004C70DB  66 85 D2                  TEST DX,DX
004C70DE  7C 31                     JL 0x004c7111
004C70E0  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
004C70E7  7D 28                     JGE 0x004c7111
004C70E9  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004C70F0  0F BF CA                  MOVSX ECX,DX
004C70F3  0F AF CB                  IMUL ECX,EBX
004C70F6  0F BF C0                  MOVSX EAX,AX
004C70F9  0F BF DE                  MOVSX EBX,SI
004C70FC  0F AF C3                  IMUL EAX,EBX
004C70FF  03 C8                     ADD ECX,EAX
004C7101  0F BF C7                  MOVSX EAX,DI
004C7104  03 C8                     ADD ECX,EAX
004C7106  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
004C710B  83 3C C8 00               CMP dword ptr [EAX + ECX*0x8],0x0
004C710F  75 77                     JNZ 0x004c7188
LAB_004c7111:
004C7111  66 85 FF                  TEST DI,DI
004C7114  0F 8C 81 00 00 00         JL 0x004c719b
004C711A  66 3B 3D 40 B2 7F 00      CMP DI,word ptr [0x007fb240]
004C7121  7D 78                     JGE 0x004c719b
004C7123  66 85 F6                  TEST SI,SI
004C7126  7C 73                     JL 0x004c719b
004C7128  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
004C712F  7D 6A                     JGE 0x004c719b
004C7131  66 85 D2                  TEST DX,DX
004C7134  7C 65                     JL 0x004c719b
004C7136  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
004C713D  7D 5C                     JGE 0x004c719b
004C713F  0F BF 05 7E B2 7F 00      MOVSX EAX,word ptr [0x007fb27e]
004C7146  0F BF CA                  MOVSX ECX,DX
004C7149  0F AF C8                  IMUL ECX,EAX
004C714C  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
004C7153  0F BF DE                  MOVSX EBX,SI
004C7156  0F AF C3                  IMUL EAX,EBX
004C7159  03 C8                     ADD ECX,EAX
004C715B  0F BF C7                  MOVSX EAX,DI
004C715E  03 C8                     ADD ECX,EAX
004C7160  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
004C7165  0F BF 0C 48               MOVSX ECX,word ptr [EAX + ECX*0x2]
004C7169  83 F9 FF                  CMP ECX,-0x1
004C716C  75 07                     JNZ 0x004c7175
LAB_004c716e:
004C716E  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_004c7175:
004C7175  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004C7178  85 C0                     TEST EAX,EAX
004C717A  75 13                     JNZ 0x004c718f
004C717C  85 C9                     TEST ECX,ECX
004C717E  75 0F                     JNZ 0x004c718f
004C7180  85 D2                     TEST EDX,EDX
004C7182  0F 84 0C FF FF FF         JZ 0x004c7094
LAB_004c7188:
004C7188  4A                        DEC EDX
004C7189  0F 89 2A FF FF FF         JNS 0x004c70b9
LAB_004c718f:
004C718F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_004c7192:
004C7192  5F                        POP EDI
004C7193  5E                        POP ESI
004C7194  5B                        POP EBX
004C7195  8B E5                     MOV ESP,EBP
004C7197  5D                        POP EBP
004C7198  C2 04 00                  RET 0x4
LAB_004c719b:
004C719B  83 C9 FF                  OR ECX,0xffffffff
004C719E  EB CE                     JMP 0x004c716e
