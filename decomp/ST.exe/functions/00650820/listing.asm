FUN_00650820:
00650820  55                        PUSH EBP
00650821  8B EC                     MOV EBP,ESP
00650823  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00650826  33 C9                     XOR ECX,ECX
00650828  B2 08                     MOV DL,0x8
LAB_0065082a:
0065082A  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
00650831  75 5C                     JNZ 0x0065088f
00650833  41                        INC ECX
00650834  83 F9 03                  CMP ECX,0x3
00650837  7C F1                     JL 0x0065082a
00650839  66 8B 08                  MOV CX,word ptr [EAX]
0065083C  66 83 F9 04               CMP CX,0x4
00650840  7D 09                     JGE 0x0065084b
00650842  C7 40 14 01 00 00 00      MOV dword ptr [EAX + 0x14],0x1
00650849  EB 08                     JMP 0x00650853
LAB_0065084b:
0065084B  38 90 D3 00 00 00         CMP byte ptr [EAX + 0xd3],DL
00650851  75 3C                     JNZ 0x0065088f
LAB_00650853:
00650853  66 83 F9 05               CMP CX,0x5
00650857  7D 09                     JGE 0x00650862
00650859  C7 40 18 32 00 00 00      MOV dword ptr [EAX + 0x18],0x32
00650860  EB 08                     JMP 0x0065086a
LAB_00650862:
00650862  38 90 D4 00 00 00         CMP byte ptr [EAX + 0xd4],DL
00650868  75 25                     JNZ 0x0065088f
LAB_0065086a:
0065086A  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0065086D  81 F9 9B 00 00 00         CMP ECX,0x9b
00650873  73 1A                     JNC 0x0065088f
00650875  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
00650878  85 C0                     TEST EAX,EAX
0065087A  7E 13                     JLE 0x0065088f
0065087C  33 D2                     XOR EDX,EDX
0065087E  8A 91 D8 8F 79 00         MOV DL,byte ptr [ECX + 0x798fd8]
00650884  3B C2                     CMP EAX,EDX
00650886  7F 07                     JG 0x0065088f
00650888  B8 01 00 00 00            MOV EAX,0x1
0065088D  5D                        POP EBP
0065088E  C3                        RET
LAB_0065088f:
0065088F  33 C0                     XOR EAX,EAX
00650891  5D                        POP EBP
00650892  C3                        RET
