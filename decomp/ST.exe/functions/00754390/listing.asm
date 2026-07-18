FUN_00754390:
00754390  55                        PUSH EBP
00754391  8B EC                     MOV EBP,ESP
00754393  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00754396  56                        PUSH ESI
00754397  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075439A  6A 01                     PUSH 0x1
0075439C  50                        PUSH EAX
0075439D  56                        PUSH ESI
0075439E  E8 CD 15 00 00            CALL 0x00755970
007543A3  85 C0                     TEST EAX,EAX
007543A5  7E 31                     JLE 0x007543d8
007543A7  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
007543AA  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
007543AD  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
007543B0  8B 44 C8 44               MOV EAX,dword ptr [EAX + ECX*0x8 + 0x44]
007543B4  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
007543B7  03 C1                     ADD EAX,ECX
007543B9  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
007543BC  5E                        POP ESI
007543BD  8B 54 08 10               MOV EDX,dword ptr [EAX + ECX*0x1 + 0x10]
007543C1  8D 44 08 10               LEA EAX,[EAX + ECX*0x1 + 0x10]
007543C5  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007543C8  89 11                     MOV dword ptr [ECX],EDX
007543CA  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
007543CD  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007543D0  89 10                     MOV dword ptr [EAX],EDX
007543D2  33 C0                     XOR EAX,EAX
007543D4  5D                        POP EBP
007543D5  C2 10 00                  RET 0x10
LAB_007543d8:
007543D8  B8 FC FF FF FF            MOV EAX,0xfffffffc
007543DD  5E                        POP ESI
007543DE  5D                        POP EBP
007543DF  C2 10 00                  RET 0x10
