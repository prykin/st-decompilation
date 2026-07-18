_strncpy:
0072E340  8B 4C 24 0C               MOV ECX,dword ptr [ESP + 0xc]
0072E344  57                        PUSH EDI
0072E345  85 C9                     TEST ECX,ECX
0072E347  74 7A                     JZ 0x0072e3c3
0072E349  56                        PUSH ESI
0072E34A  53                        PUSH EBX
0072E34B  8B D9                     MOV EBX,ECX
0072E34D  8B 74 24 14               MOV ESI,dword ptr [ESP + 0x14]
0072E351  F7 C6 03 00 00 00         TEST ESI,0x3
0072E357  8B 7C 24 10               MOV EDI,dword ptr [ESP + 0x10]
0072E35B  75 07                     JNZ 0x0072e364
0072E35D  C1 E9 02                  SHR ECX,0x2
0072E360  75 6F                     JNZ 0x0072e3d1
0072E362  EB 21                     JMP 0x0072e385
LAB_0072e364:
0072E364  8A 06                     MOV AL,byte ptr [ESI]
0072E366  46                        INC ESI
0072E367  88 07                     MOV byte ptr [EDI],AL
0072E369  47                        INC EDI
0072E36A  49                        DEC ECX
0072E36B  74 25                     JZ 0x0072e392
0072E36D  84 C0                     TEST AL,AL
0072E36F  74 29                     JZ 0x0072e39a
0072E371  F7 C6 03 00 00 00         TEST ESI,0x3
0072E377  75 EB                     JNZ 0x0072e364
0072E379  8B D9                     MOV EBX,ECX
0072E37B  C1 E9 02                  SHR ECX,0x2
0072E37E  75 51                     JNZ 0x0072e3d1
LAB_0072e380:
0072E380  83 E3 03                  AND EBX,0x3
0072E383  74 0D                     JZ 0x0072e392
LAB_0072e385:
0072E385  8A 06                     MOV AL,byte ptr [ESI]
0072E387  46                        INC ESI
0072E388  88 07                     MOV byte ptr [EDI],AL
0072E38A  47                        INC EDI
0072E38B  84 C0                     TEST AL,AL
0072E38D  74 2F                     JZ 0x0072e3be
0072E38F  4B                        DEC EBX
0072E390  75 F3                     JNZ 0x0072e385
LAB_0072e392:
0072E392  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
0072E396  5B                        POP EBX
0072E397  5E                        POP ESI
0072E398  5F                        POP EDI
0072E399  C3                        RET
LAB_0072e39a:
0072E39A  F7 C7 03 00 00 00         TEST EDI,0x3
0072E3A0  74 12                     JZ 0x0072e3b4
LAB_0072e3a2:
0072E3A2  88 07                     MOV byte ptr [EDI],AL
0072E3A4  47                        INC EDI
0072E3A5  49                        DEC ECX
0072E3A6  0F 84 8A 00 00 00         JZ 0x0072e436
0072E3AC  F7 C7 03 00 00 00         TEST EDI,0x3
0072E3B2  75 EE                     JNZ 0x0072e3a2
LAB_0072e3b4:
0072E3B4  8B D9                     MOV EBX,ECX
0072E3B6  C1 E9 02                  SHR ECX,0x2
0072E3B9  75 6C                     JNZ 0x0072e427
LAB_0072e3bb:
0072E3BB  88 07                     MOV byte ptr [EDI],AL
0072E3BD  47                        INC EDI
LAB_0072e3be:
0072E3BE  4B                        DEC EBX
0072E3BF  75 FA                     JNZ 0x0072e3bb
0072E3C1  5B                        POP EBX
0072E3C2  5E                        POP ESI
LAB_0072e3c3:
0072E3C3  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
0072E3C7  5F                        POP EDI
0072E3C8  C3                        RET
LAB_0072e3c9:
0072E3C9  89 17                     MOV dword ptr [EDI],EDX
0072E3CB  83 C7 04                  ADD EDI,0x4
0072E3CE  49                        DEC ECX
0072E3CF  74 AF                     JZ 0x0072e380
LAB_0072e3d1:
0072E3D1  BA FF FE FE 7E            MOV EDX,0x7efefeff
0072E3D6  8B 06                     MOV EAX,dword ptr [ESI]
0072E3D8  03 D0                     ADD EDX,EAX
0072E3DA  83 F0 FF                  XOR EAX,0xffffffff
0072E3DD  33 C2                     XOR EAX,EDX
0072E3DF  8B 16                     MOV EDX,dword ptr [ESI]
0072E3E1  83 C6 04                  ADD ESI,0x4
0072E3E4  A9 00 01 01 81            TEST EAX,0x81010100
0072E3E9  74 DE                     JZ 0x0072e3c9
0072E3EB  84 D2                     TEST DL,DL
0072E3ED  74 2C                     JZ 0x0072e41b
0072E3EF  84 F6                     TEST DH,DH
0072E3F1  74 1E                     JZ 0x0072e411
0072E3F3  F7 C2 00 00 FF 00         TEST EDX,0xff0000
0072E3F9  74 0C                     JZ 0x0072e407
0072E3FB  F7 C2 00 00 00 FF         TEST EDX,0xff000000
0072E401  75 C6                     JNZ 0x0072e3c9
0072E403  89 17                     MOV dword ptr [EDI],EDX
0072E405  EB 18                     JMP 0x0072e41f
LAB_0072e407:
0072E407  81 E2 FF FF 00 00         AND EDX,0xffff
0072E40D  89 17                     MOV dword ptr [EDI],EDX
0072E40F  EB 0E                     JMP 0x0072e41f
LAB_0072e411:
0072E411  81 E2 FF 00 00 00         AND EDX,0xff
0072E417  89 17                     MOV dword ptr [EDI],EDX
0072E419  EB 04                     JMP 0x0072e41f
LAB_0072e41b:
0072E41B  33 D2                     XOR EDX,EDX
0072E41D  89 17                     MOV dword ptr [EDI],EDX
LAB_0072e41f:
0072E41F  83 C7 04                  ADD EDI,0x4
0072E422  33 C0                     XOR EAX,EAX
0072E424  49                        DEC ECX
0072E425  74 0A                     JZ 0x0072e431
LAB_0072e427:
0072E427  33 C0                     XOR EAX,EAX
LAB_0072e429:
0072E429  89 07                     MOV dword ptr [EDI],EAX
0072E42B  83 C7 04                  ADD EDI,0x4
0072E42E  49                        DEC ECX
0072E42F  75 F8                     JNZ 0x0072e429
LAB_0072e431:
0072E431  83 E3 03                  AND EBX,0x3
0072E434  75 85                     JNZ 0x0072e3bb
LAB_0072e436:
0072E436  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
0072E43A  5B                        POP EBX
0072E43B  5E                        POP ESI
0072E43C  5F                        POP EDI
0072E43D  C3                        RET
