FUN_0070a460:
0070A460  55                        PUSH EBP
0070A461  8B EC                     MOV EBP,ESP
0070A463  56                        PUSH ESI
0070A464  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070A467  85 F6                     TEST ESI,ESI
0070A469  74 24                     JZ 0x0070a48f
0070A46B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0070A46E  85 C0                     TEST EAX,EAX
0070A470  74 1D                     JZ 0x0070a48f
0070A472  50                        PUSH EAX
0070A473  56                        PUSH ESI
0070A474  E8 17 61 02 00            CALL 0x00730590
0070A479  83 C4 08                  ADD ESP,0x8
0070A47C  85 C0                     TEST EAX,EAX
0070A47E  75 03                     JNZ 0x0070a483
0070A480  5E                        POP ESI
0070A481  5D                        POP EBP
0070A482  C3                        RET
LAB_0070a483:
0070A483  33 C9                     XOR ECX,ECX
0070A485  3B C6                     CMP EAX,ESI
0070A487  0F 94 C1                  SETZ CL
0070A48A  8B C1                     MOV EAX,ECX
0070A48C  5E                        POP ESI
0070A48D  5D                        POP EBP
0070A48E  C3                        RET
LAB_0070a48f:
0070A48F  B8 01 00 00 00            MOV EAX,0x1
0070A494  5E                        POP ESI
0070A495  5D                        POP EBP
0070A496  C3                        RET
