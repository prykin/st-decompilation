FUN_00416840:
00416840  55                        PUSH EBP
00416841  8B EC                     MOV EBP,ESP
00416843  8B 81 D3 00 00 00         MOV EAX,dword ptr [ECX + 0xd3]
00416849  8B 91 97 00 00 00         MOV EDX,dword ptr [ECX + 0x97]
0041684F  66 8B 04 C2               MOV AX,word ptr [EDX + EAX*0x8]
00416853  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00416856  66 89 02                  MOV word ptr [EDX],AX
00416859  8B 81 D3 00 00 00         MOV EAX,dword ptr [ECX + 0xd3]
0041685F  8B 91 97 00 00 00         MOV EDX,dword ptr [ECX + 0x97]
00416865  66 8B 44 C2 02            MOV AX,word ptr [EDX + EAX*0x8 + 0x2]
0041686A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0041686D  66 89 02                  MOV word ptr [EDX],AX
00416870  8B 81 D3 00 00 00         MOV EAX,dword ptr [ECX + 0xd3]
00416876  8B 89 97 00 00 00         MOV ECX,dword ptr [ECX + 0x97]
0041687C  66 8B 54 C1 04            MOV DX,word ptr [ECX + EAX*0x8 + 0x4]
00416881  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00416884  66 89 10                  MOV word ptr [EAX],DX
00416887  5D                        POP EBP
00416888  C2 0C 00                  RET 0xc
