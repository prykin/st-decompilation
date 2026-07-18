FUN_00618900:
00618900  55                        PUSH EBP
00618901  8B EC                     MOV EBP,ESP
00618903  53                        PUSH EBX
00618904  8B C1                     MOV EAX,ECX
00618906  56                        PUSH ESI
00618907  57                        PUSH EDI
00618908  8B 78 62                  MOV EDI,dword ptr [EAX + 0x62]
0061890B  33 C9                     XOR ECX,ECX
0061890D  85 FF                     TEST EDI,EDI
0061890F  74 6B                     JZ 0x0061897c
00618911  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
00618914  85 DB                     TEST EBX,EBX
00618916  7E 64                     JLE 0x0061897c
00618918  33 F6                     XOR ESI,ESI
0061891A  85 DB                     TEST EBX,EBX
0061891C  7E 5E                     JLE 0x0061897c
0061891E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00618921  3B F3                     CMP ESI,EBX
LAB_00618923:
00618923  73 11                     JNC 0x00618936
00618925  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
00618928  0F AF D6                  IMUL EDX,ESI
0061892B  03 57 1C                  ADD EDX,dword ptr [EDI + 0x1c]
0061892E  85 D2                     TEST EDX,EDX
00618930  74 04                     JZ 0x00618936
00618932  39 0A                     CMP dword ptr [EDX],ECX
00618934  74 0E                     JZ 0x00618944
LAB_00618936:
00618936  46                        INC ESI
00618937  3B F3                     CMP ESI,EBX
00618939  7C E8                     JL 0x00618923
0061893B  5F                        POP EDI
0061893C  5E                        POP ESI
0061893D  33 C0                     XOR EAX,EAX
0061893F  5B                        POP EBX
00618940  5D                        POP EBP
00618941  C2 08 00                  RET 0x8
LAB_00618944:
00618944  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00618947  85 C9                     TEST ECX,ECX
00618949  74 10                     JZ 0x0061895b
0061894B  66 FF 42 06               INC word ptr [EDX + 0x6]
0061894F  5F                        POP EDI
00618950  5E                        POP ESI
00618951  B8 01 00 00 00            MOV EAX,0x1
00618956  5B                        POP EBX
00618957  5D                        POP EBP
00618958  C2 08 00                  RET 0x8
LAB_0061895b:
0061895B  66 FF 4A 06               DEC word ptr [EDX + 0x6]
0061895F  66 83 7A 06 00            CMP word ptr [EDX + 0x6],0x0
00618964  7F 0A                     JG 0x00618970
00618966  8B 40 62                  MOV EAX,dword ptr [EAX + 0x62]
00618969  56                        PUSH ESI
0061896A  50                        PUSH EAX
0061896B  E8 00 83 09 00            CALL 0x006b0c70
LAB_00618970:
00618970  5F                        POP EDI
00618971  5E                        POP ESI
00618972  B8 01 00 00 00            MOV EAX,0x1
00618977  5B                        POP EBX
00618978  5D                        POP EBP
00618979  C2 08 00                  RET 0x8
LAB_0061897c:
0061897C  5F                        POP EDI
0061897D  5E                        POP ESI
0061897E  8B C1                     MOV EAX,ECX
00618980  5B                        POP EBX
00618981  5D                        POP EBP
00618982  C2 08 00                  RET 0x8
