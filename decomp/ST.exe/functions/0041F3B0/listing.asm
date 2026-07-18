FUN_0041f3b0:
0041F3B0  56                        PUSH ESI
0041F3B1  8B F1                     MOV ESI,ECX
0041F3B3  57                        PUSH EDI
0041F3B4  8B 86 21 02 00 00         MOV EAX,dword ptr [ESI + 0x221]
0041F3BA  83 F8 FF                  CMP EAX,-0x1
0041F3BD  0F 84 E3 01 00 00         JZ 0x0041f5a6
0041F3C3  83 F8 01                  CMP EAX,0x1
0041F3C6  75 0D                     JNZ 0x0041f3d5
0041F3C8  C7 86 21 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x221],0x0
0041F3D2  5F                        POP EDI
0041F3D3  5E                        POP ESI
0041F3D4  C3                        RET
LAB_0041f3d5:
0041F3D5  83 F8 02                  CMP EAX,0x2
0041F3D8  0F 85 4D 01 00 00         JNZ 0x0041f52b
0041F3DE  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0041F3E3  F6 80 E4 00 00 00 01      TEST byte ptr [EAX + 0xe4],0x1
0041F3EA  0F 85 B6 01 00 00         JNZ 0x0041f5a6
0041F3F0  8B 86 25 02 00 00         MOV EAX,dword ptr [ESI + 0x225]
0041F3F6  85 C0                     TEST EAX,EAX
0041F3F8  75 1B                     JNZ 0x0041f415
0041F3FA  8B CE                     MOV ECX,ESI
0041F3FC  E8 F6 42 FE FF            CALL 0x004036f7
0041F401  6A 01                     PUSH 0x1
0041F403  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
0041F409  E8 9E 2E FE FF            CALL 0x004022ac
0041F40E  48                        DEC EAX
0041F40F  89 86 25 02 00 00         MOV dword ptr [ESI + 0x225],EAX
LAB_0041f415:
0041F415  8B 16                     MOV EDX,dword ptr [ESI]
0041F417  8B CE                     MOV ECX,ESI
0041F419  FF 52 7C                  CALL dword ptr [EDX + 0x7c]
0041F41C  8B F8                     MOV EDI,EAX
0041F41E  83 FF 01                  CMP EDI,0x1
0041F421  7E 1A                     JLE 0x0041f43d
0041F423  0F AF BE 25 02 00 00      IMUL EDI,dword ptr [ESI + 0x225]
0041F42A  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0041F42F  F7 EF                     IMUL EDI
0041F431  C1 FA 05                  SAR EDX,0x5
0041F434  8B C2                     MOV EAX,EDX
0041F436  C1 E8 1F                  SHR EAX,0x1f
0041F439  03 D0                     ADD EDX,EAX
0041F43B  8B FA                     MOV EDI,EDX
LAB_0041f43d:
0041F43D  85 FF                     TEST EDI,EDI
0041F43F  75 05                     JNZ 0x0041f446
0041F441  BF 01 00 00 00            MOV EDI,0x1
LAB_0041f446:
0041F446  53                        PUSH EBX
0041F447  8D 9E D5 01 00 00         LEA EBX,[ESI + 0x1d5]
0041F44D  6A 01                     PUSH 0x1
0041F44F  8B CB                     MOV ECX,EBX
0041F451  E8 59 4E FE FF            CALL 0x004042af
0041F456  3B F8                     CMP EDI,EAX
0041F458  74 13                     JZ 0x0041f46d
0041F45A  57                        PUSH EDI
0041F45B  6A 01                     PUSH 0x1
0041F45D  8B CB                     MOV ECX,EBX
0041F45F  E8 00 1C FE FF            CALL 0x00401064
0041F464  6A 01                     PUSH 0x1
0041F466  8B CB                     MOV ECX,EBX
0041F468  E8 4F 3C FE FF            CALL 0x004030bc
LAB_0041f46d:
0041F46D  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0041F470  83 F8 14                  CMP EAX,0x14
0041F473  74 28                     JZ 0x0041f49d
0041F475  3D E8 03 00 00            CMP EAX,0x3e8
0041F47A  74 21                     JZ 0x0041f49d
0041F47C  3D 72 01 00 00            CMP EAX,0x172
0041F481  74 1A                     JZ 0x0041f49d
0041F483  3D A4 01 00 00            CMP EAX,0x1a4
0041F488  74 13                     JZ 0x0041f49d
0041F48A  3D E9 03 00 00            CMP EAX,0x3e9
0041F48F  0F 85 85 00 00 00         JNZ 0x0041f51a
0041F495  8B 86 59 02 00 00         MOV EAX,dword ptr [ESI + 0x259]
0041F49B  EB 07                     JMP 0x0041f4a4
LAB_0041f49d:
0041F49D  8B 16                     MOV EDX,dword ptr [ESI]
0041F49F  8B CE                     MOV ECX,ESI
0041F4A1  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
LAB_0041f4a4:
0041F4A4  83 F8 FF                  CMP EAX,-0x1
0041F4A7  74 71                     JZ 0x0041f51a
0041F4A9  8B 06                     MOV EAX,dword ptr [ESI]
0041F4AB  8B CE                     MOV ECX,ESI
0041F4AD  FF 50 0C                  CALL dword ptr [EAX + 0xc]
0041F4B0  83 F8 03                  CMP EAX,0x3
0041F4B3  75 65                     JNZ 0x0041f51a
0041F4B5  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0041F4B8  3D 72 01 00 00            CMP EAX,0x172
0041F4BD  74 5B                     JZ 0x0041f51a
0041F4BF  3D A4 01 00 00            CMP EAX,0x1a4
0041F4C4  74 54                     JZ 0x0041f51a
0041F4C6  8B 16                     MOV EDX,dword ptr [ESI]
0041F4C8  8B CE                     MOV ECX,ESI
0041F4CA  FF 92 C4 00 00 00         CALL dword ptr [EDX + 0xc4]
0041F4D0  8B F8                     MOV EDI,EAX
0041F4D2  83 FF 01                  CMP EDI,0x1
0041F4D5  7E 1A                     JLE 0x0041f4f1
0041F4D7  0F AF BE 25 02 00 00      IMUL EDI,dword ptr [ESI + 0x225]
0041F4DE  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0041F4E3  F7 EF                     IMUL EDI
0041F4E5  C1 FA 05                  SAR EDX,0x5
0041F4E8  8B C2                     MOV EAX,EDX
0041F4EA  C1 E8 1F                  SHR EAX,0x1f
0041F4ED  03 D0                     ADD EDX,EAX
0041F4EF  8B FA                     MOV EDI,EDX
LAB_0041f4f1:
0041F4F1  85 FF                     TEST EDI,EDI
0041F4F3  75 05                     JNZ 0x0041f4fa
0041F4F5  BF 01 00 00 00            MOV EDI,0x1
LAB_0041f4fa:
0041F4FA  6A 02                     PUSH 0x2
0041F4FC  8B CB                     MOV ECX,EBX
0041F4FE  E8 AC 4D FE FF            CALL 0x004042af
0041F503  3B F8                     CMP EDI,EAX
0041F505  74 13                     JZ 0x0041f51a
0041F507  57                        PUSH EDI
0041F508  6A 02                     PUSH 0x2
0041F50A  8B CB                     MOV ECX,EBX
0041F50C  E8 53 1B FE FF            CALL 0x00401064
0041F511  6A 02                     PUSH 0x2
0041F513  8B CB                     MOV ECX,EBX
0041F515  E8 A2 3B FE FF            CALL 0x004030bc
LAB_0041f51a:
0041F51A  8B 86 21 02 00 00         MOV EAX,dword ptr [ESI + 0x221]
0041F520  5B                        POP EBX
0041F521  48                        DEC EAX
0041F522  5F                        POP EDI
0041F523  89 86 21 02 00 00         MOV dword ptr [ESI + 0x221],EAX
0041F529  5E                        POP ESI
0041F52A  C3                        RET
LAB_0041f52b:
0041F52B  85 C0                     TEST EAX,EAX
0041F52D  75 77                     JNZ 0x0041f5a6
0041F52F  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0041F535  50                        PUSH EAX
0041F536  6A 01                     PUSH 0x1
0041F538  8B CF                     MOV ECX,EDI
0041F53A  E8 25 1B FE FF            CALL 0x00401064
0041F53F  6A 01                     PUSH 0x1
0041F541  8B CF                     MOV ECX,EDI
0041F543  E8 74 3B FE FF            CALL 0x004030bc
0041F548  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0041F54B  83 F8 14                  CMP EAX,0x14
0041F54E  74 24                     JZ 0x0041f574
0041F550  3D E8 03 00 00            CMP EAX,0x3e8
0041F555  74 1D                     JZ 0x0041f574
0041F557  3D 72 01 00 00            CMP EAX,0x172
0041F55C  74 16                     JZ 0x0041f574
0041F55E  3D A4 01 00 00            CMP EAX,0x1a4
0041F563  74 0F                     JZ 0x0041f574
0041F565  3D E9 03 00 00            CMP EAX,0x3e9
0041F56A  75 34                     JNZ 0x0041f5a0
0041F56C  8B 86 59 02 00 00         MOV EAX,dword ptr [ESI + 0x259]
0041F572  EB 07                     JMP 0x0041f57b
LAB_0041f574:
0041F574  8B 16                     MOV EDX,dword ptr [ESI]
0041F576  8B CE                     MOV ECX,ESI
0041F578  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
LAB_0041f57b:
0041F57B  83 F8 FF                  CMP EAX,-0x1
0041F57E  74 20                     JZ 0x0041f5a0
0041F580  8B 06                     MOV EAX,dword ptr [ESI]
0041F582  8B CE                     MOV ECX,ESI
0041F584  FF 50 0C                  CALL dword ptr [EAX + 0xc]
0041F587  83 F8 03                  CMP EAX,0x3
0041F58A  75 14                     JNZ 0x0041f5a0
0041F58C  6A 00                     PUSH 0x0
0041F58E  6A 02                     PUSH 0x2
0041F590  8B CF                     MOV ECX,EDI
0041F592  E8 CD 1A FE FF            CALL 0x00401064
0041F597  6A 02                     PUSH 0x2
0041F599  8B CF                     MOV ECX,EDI
0041F59B  E8 1C 3B FE FF            CALL 0x004030bc
LAB_0041f5a0:
0041F5A0  FF 8E 21 02 00 00         DEC dword ptr [ESI + 0x221]
LAB_0041f5a6:
0041F5A6  5F                        POP EDI
0041F5A7  5E                        POP ESI
0041F5A8  C3                        RET
