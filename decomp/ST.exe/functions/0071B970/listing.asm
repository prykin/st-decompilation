FUN_0071b970:
0071B970  55                        PUSH EBP
0071B971  8B EC                     MOV EBP,ESP
0071B973  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0071B976  53                        PUSH EBX
0071B977  33 C0                     XOR EAX,EAX
0071B979  56                        PUSH ESI
0071B97A  8B 0A                     MOV ECX,dword ptr [EDX]
0071B97C  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0071B97F  83 E1 08                  AND ECX,0x8
0071B982  74 11                     JZ 0x0071b995
0071B984  F6 06 08                  TEST byte ptr [ESI],0x8
0071B987  74 0C                     JZ 0x0071b995
0071B989  8B 5E 04                  MOV EBX,dword ptr [ESI + 0x4]
0071B98C  57                        PUSH EDI
0071B98D  8B 7A 04                  MOV EDI,dword ptr [EDX + 0x4]
0071B990  3B FB                     CMP EDI,EBX
0071B992  5F                        POP EDI
0071B993  74 1D                     JZ 0x0071b9b2
LAB_0071b995:
0071B995  85 C9                     TEST ECX,ECX
0071B997  75 1E                     JNZ 0x0071b9b7
0071B999  F6 06 08                  TEST byte ptr [ESI],0x8
0071B99C  75 19                     JNZ 0x0071b9b7
0071B99E  8A 4A 04                  MOV CL,byte ptr [EDX + 0x4]
0071B9A1  8A 5E 04                  MOV BL,byte ptr [ESI + 0x4]
0071B9A4  3A CB                     CMP CL,BL
0071B9A6  75 0F                     JNZ 0x0071b9b7
0071B9A8  8A 52 05                  MOV DL,byte ptr [EDX + 0x5]
0071B9AB  8A 4E 05                  MOV CL,byte ptr [ESI + 0x5]
0071B9AE  3A D1                     CMP DL,CL
0071B9B0  75 05                     JNZ 0x0071b9b7
LAB_0071b9b2:
0071B9B2  B8 01 00 00 00            MOV EAX,0x1
LAB_0071b9b7:
0071B9B7  5E                        POP ESI
0071B9B8  5B                        POP EBX
0071B9B9  5D                        POP EBP
0071B9BA  C2 08 00                  RET 0x8
