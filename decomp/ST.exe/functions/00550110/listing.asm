FUN_00550110:
00550110  56                        PUSH ESI
00550111  8B F1                     MOV ESI,ECX
00550113  33 C0                     XOR EAX,EAX
00550115  8A 4E 4D                  MOV CL,byte ptr [ESI + 0x4d]
00550118  8A 56 4E                  MOV DL,byte ptr [ESI + 0x4e]
0055011B  3A CA                     CMP CL,DL
0055011D  76 1D                     JBE 0x0055013c
0055011F  8B 56 3D                  MOV EDX,dword ptr [ESI + 0x3d]
00550122  8B CE                     MOV ECX,ESI
00550124  66 89 42 05               MOV word ptr [EDX + 0x5],AX
00550128  8A 46 4E                  MOV AL,byte ptr [ESI + 0x4e]
0055012B  FE C0                     INC AL
0055012D  88 46 4E                  MOV byte ptr [ESI + 0x4e],AL
00550130  E8 E0 49 EB FF            CALL 0x00404b15
00550135  B8 01 00 00 00            MOV EAX,0x1
0055013A  5E                        POP ESI
0055013B  C3                        RET
LAB_0055013c:
0055013C  8B 4E 3D                  MOV ECX,dword ptr [ESI + 0x3d]
0055013F  85 C9                     TEST ECX,ECX
00550141  74 21                     JZ 0x00550164
00550143  66 8B 56 57               MOV DX,word ptr [ESI + 0x57]
00550147  66 89 51 05               MOV word ptr [ECX + 0x5],DX
0055014B  66 83 7E 57 00            CMP word ptr [ESI + 0x57],0x0
00550150  74 0C                     JZ 0x0055015e
00550152  8B CE                     MOV ECX,ESI
00550154  E8 BC 49 EB FF            CALL 0x00404b15
00550159  B8 01 00 00 00            MOV EAX,0x1
LAB_0055015e:
0055015E  66 C7 46 57 00 00         MOV word ptr [ESI + 0x57],0x0
LAB_00550164:
00550164  5E                        POP ESI
00550165  C3                        RET
