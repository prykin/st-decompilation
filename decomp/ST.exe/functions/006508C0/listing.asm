FUN_006508c0:
006508C0  55                        PUSH EBP
006508C1  8B EC                     MOV EBP,ESP
006508C3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006508C6  33 C0                     XOR EAX,EAX
006508C8  B2 08                     MOV DL,0x8
LAB_006508ca:
006508CA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
006508D1  75 41                     JNZ 0x00650914
006508D3  40                        INC EAX
006508D4  83 F8 03                  CMP EAX,0x3
006508D7  7C F1                     JL 0x006508ca
006508D9  66 83 39 04               CMP word ptr [ECX],0x4
006508DD  7D 09                     JGE 0x006508e8
006508DF  C7 41 14 01 00 00 00      MOV dword ptr [ECX + 0x14],0x1
006508E6  EB 08                     JMP 0x006508f0
LAB_006508e8:
006508E8  38 91 D3 00 00 00         CMP byte ptr [ECX + 0xd3],DL
006508EE  75 24                     JNZ 0x00650914
LAB_006508f0:
006508F0  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
006508F3  3D 9B 00 00 00            CMP EAX,0x9b
006508F8  73 1A                     JNC 0x00650914
006508FA  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
006508FD  85 C9                     TEST ECX,ECX
006508FF  7E 13                     JLE 0x00650914
00650901  33 D2                     XOR EDX,EDX
00650903  8A 90 D8 8F 79 00         MOV DL,byte ptr [EAX + 0x798fd8]
00650909  3B CA                     CMP ECX,EDX
0065090B  7F 07                     JG 0x00650914
0065090D  B8 01 00 00 00            MOV EAX,0x1
00650912  5D                        POP EBP
00650913  C3                        RET
LAB_00650914:
00650914  33 C0                     XOR EAX,EAX
00650916  5D                        POP EBP
00650917  C3                        RET
