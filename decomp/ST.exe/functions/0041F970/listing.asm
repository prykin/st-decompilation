FUN_0041f970:
0041F970  56                        PUSH ESI
0041F971  8B F1                     MOV ESI,ECX
0041F973  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0041F979  85 C9                     TEST ECX,ECX
0041F97B  74 1F                     JZ 0x0041f99c
0041F97D  83 BE 29 02 00 00 01      CMP dword ptr [ESI + 0x229],0x1
0041F984  75 16                     JNZ 0x0041f99c
0041F986  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
0041F98C  50                        PUSH EAX
0041F98D  E8 5E 6D 2C 00            CALL 0x006e66f0
0041F992  C7 86 29 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x229],0x0
LAB_0041f99c:
0041F99C  5E                        POP ESI
0041F99D  C3                        RET
