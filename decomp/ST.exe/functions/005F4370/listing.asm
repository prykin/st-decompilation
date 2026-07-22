STBHEShellC::sub_005F4370:
005F4370  55                        PUSH EBP
005F4371  8B EC                     MOV EBP,ESP
005F4373  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005F4376  53                        PUSH EBX
005F4377  83 C8 FF                  OR EAX,0xffffffff
005F437A  56                        PUSH ESI
005F437B  83 EA 00                  SUB EDX,0x0
005F437E  57                        PUSH EDI
005F437F  0F 84 FD 01 00 00         JZ 0x005f4582
005F4385  4A                        DEC EDX
005F4386  0F 84 E1 00 00 00         JZ 0x005f446d
005F438C  4A                        DEC EDX
005F438D  0F 85 3F 02 00 00         JNZ 0x005f45d2
005F4393  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005F4398  8B 91 D7 00 00 00         MOV EDX,dword ptr [ECX + 0xd7]
005F439E  8B B0 E4 00 00 00         MOV ESI,dword ptr [EAX + 0xe4]
005F43A4  8B 81 FB 00 00 00         MOV EAX,dword ptr [ECX + 0xfb]
005F43AA  2B F0                     SUB ESI,EAX
005F43AC  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005F43B1  0F AF D6                  IMUL EDX,ESI
005F43B4  F7 EA                     IMUL EDX
005F43B6  C1 FA 0C                  SAR EDX,0xc
005F43B9  8B C2                     MOV EAX,EDX
005F43BB  C1 E8 1F                  SHR EAX,0x1f
005F43BE  03 D0                     ADD EDX,EAX
005F43C0  0F BF 81 D1 00 00 00      MOVSX EAX,word ptr [ECX + 0xd1]
005F43C7  03 D0                     ADD EDX,EAX
005F43C9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F43CC  89 10                     MOV dword ptr [EAX],EDX
005F43CE  8B 91 DB 00 00 00         MOV EDX,dword ptr [ECX + 0xdb]
005F43D4  0F AF D6                  IMUL EDX,ESI
005F43D7  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005F43DC  F7 EA                     IMUL EDX
005F43DE  C1 FA 0C                  SAR EDX,0xc
005F43E1  8B C2                     MOV EAX,EDX
005F43E3  C1 E8 1F                  SHR EAX,0x1f
005F43E6  03 D0                     ADD EDX,EAX
005F43E8  0F BF 81 D3 00 00 00      MOVSX EAX,word ptr [ECX + 0xd3]
005F43EF  03 D0                     ADD EDX,EAX
005F43F1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005F43F4  89 10                     MOV dword ptr [EAX],EDX
005F43F6  8B 91 F7 00 00 00         MOV EDX,dword ptr [ECX + 0xf7]
005F43FC  0F AF D6                  IMUL EDX,ESI
005F43FF  0F AF D6                  IMUL EDX,ESI
005F4402  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005F4407  F7 EA                     IMUL EDX
005F4409  C1 FA 0D                  SAR EDX,0xd
005F440C  8B C2                     MOV EAX,EDX
005F440E  C1 E8 1F                  SHR EAX,0x1f
005F4411  03 D0                     ADD EDX,EAX
005F4413  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005F4418  8B FA                     MOV EDI,EDX
005F441A  8B 91 DF 00 00 00         MOV EDX,dword ptr [ECX + 0xdf]
005F4420  0F AF D6                  IMUL EDX,ESI
005F4423  F7 EA                     IMUL EDX
005F4425  C1 FA 0C                  SAR EDX,0xc
005F4428  8B C2                     MOV EAX,EDX
005F442A  C1 E8 1F                  SHR EAX,0x1f
005F442D  03 D0                     ADD EDX,EAX
005F442F  0F BF 81 D5 00 00 00      MOVSX EAX,word ptr [ECX + 0xd5]
005F4436  2B D7                     SUB EDX,EDI
005F4438  5F                        POP EDI
005F4439  03 D0                     ADD EDX,EAX
005F443B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005F443E  89 10                     MOV dword ptr [EAX],EDX
005F4440  8B 91 E3 00 00 00         MOV EDX,dword ptr [ECX + 0xe3]
005F4446  0F AF D6                  IMUL EDX,ESI
005F4449  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005F444E  8B B1 EF 00 00 00         MOV ESI,dword ptr [ECX + 0xef]
005F4454  F7 EA                     IMUL EDX
005F4456  C1 FA 0C                  SAR EDX,0xc
005F4459  8B C2                     MOV EAX,EDX
005F445B  C1 E8 1F                  SHR EAX,0x1f
005F445E  03 D0                     ADD EDX,EAX
005F4460  33 C0                     XOR EAX,EAX
005F4462  3B D6                     CMP EDX,ESI
005F4464  5E                        POP ESI
005F4465  0F 9D C0                  SETGE AL
005F4468  5B                        POP EBX
005F4469  5D                        POP EBP
005F446A  C2 10 00                  RET 0x10
LAB_005f446d:
005F446D  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005F4473  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005F4478  8B BA E4 00 00 00         MOV EDI,dword ptr [EDX + 0xe4]
005F447E  8B 91 FB 00 00 00         MOV EDX,dword ptr [ECX + 0xfb]
005F4484  2B FA                     SUB EDI,EDX
005F4486  8B 91 E7 00 00 00         MOV EDX,dword ptr [ECX + 0xe7]
005F448C  8B F7                     MOV ESI,EDI
005F448E  0F AF F7                  IMUL ESI,EDI
005F4491  0F AF D6                  IMUL EDX,ESI
005F4494  F7 EA                     IMUL EDX
005F4496  C1 FA 0D                  SAR EDX,0xd
005F4499  8B C2                     MOV EAX,EDX
005F449B  C1 E8 1F                  SHR EAX,0x1f
005F449E  03 D0                     ADD EDX,EAX
005F44A0  B8 73 B2 E7 45            MOV EAX,0x45e7b273
005F44A5  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
005F44A8  8B 91 EB 00 00 00         MOV EDX,dword ptr [ECX + 0xeb]
005F44AE  0F AF D6                  IMUL EDX,ESI
005F44B1  0F AF D7                  IMUL EDX,EDI
005F44B4  F7 EA                     IMUL EDX
005F44B6  8B DA                     MOV EBX,EDX
005F44B8  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005F44BD  C1 FB 0D                  SAR EBX,0xd
005F44C0  8B D3                     MOV EDX,EBX
005F44C2  C1 EA 1F                  SHR EDX,0x1f
005F44C5  03 DA                     ADD EBX,EDX
005F44C7  8B 91 DF 00 00 00         MOV EDX,dword ptr [ECX + 0xdf]
005F44CD  0F AF D6                  IMUL EDX,ESI
005F44D0  F7 EA                     IMUL EDX
005F44D2  C1 FA 0D                  SAR EDX,0xd
005F44D5  8B C2                     MOV EAX,EDX
005F44D7  03 D3                     ADD EDX,EBX
005F44D9  C1 E8 1F                  SHR EAX,0x1f
005F44DC  03 C2                     ADD EAX,EDX
005F44DE  8B 91 E3 00 00 00         MOV EDX,dword ptr [ECX + 0xe3]
005F44E4  0F AF D7                  IMUL EDX,EDI
005F44E7  03 C2                     ADD EAX,EDX
005F44E9  0F BF 91 D5 00 00 00      MOVSX EDX,word ptr [ECX + 0xd5]
005F44F0  03 C2                     ADD EAX,EDX
005F44F2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005F44F5  89 02                     MOV dword ptr [EDX],EAX
005F44F7  8B 91 D7 00 00 00         MOV EDX,dword ptr [ECX + 0xd7]
005F44FD  0F AF D6                  IMUL EDX,ESI
005F4500  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005F4505  F7 EA                     IMUL EDX
005F4507  C1 FA 0D                  SAR EDX,0xd
005F450A  8B C2                     MOV EAX,EDX
005F450C  C1 E8 1F                  SHR EAX,0x1f
005F450F  03 D0                     ADD EDX,EAX
005F4511  0F BF 81 D1 00 00 00      MOVSX EAX,word ptr [ECX + 0xd1]
005F4518  03 D0                     ADD EDX,EAX
005F451A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F451D  89 10                     MOV dword ptr [EAX],EDX
005F451F  8B 91 DB 00 00 00         MOV EDX,dword ptr [ECX + 0xdb]
005F4525  0F AF D6                  IMUL EDX,ESI
005F4528  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005F452D  F7 EA                     IMUL EDX
005F452F  C1 FA 0D                  SAR EDX,0xd
005F4532  8B C2                     MOV EAX,EDX
005F4534  C1 E8 1F                  SHR EAX,0x1f
005F4537  03 D0                     ADD EDX,EAX
005F4539  0F BF 81 D3 00 00 00      MOVSX EAX,word ptr [ECX + 0xd3]
005F4540  03 D0                     ADD EDX,EAX
005F4542  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005F4545  89 10                     MOV dword ptr [EAX],EDX
005F4547  8B 81 EF 00 00 00         MOV EAX,dword ptr [ECX + 0xef]
005F454D  3D F6 01 00 00            CMP EAX,0x1f6
005F4552  7E 1A                     JLE 0x005f456e
005F4554  8B 89 F3 00 00 00         MOV ECX,dword ptr [ECX + 0xf3]
005F455A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005F455D  83 E9 03                  SUB ECX,0x3
005F4560  33 C0                     XOR EAX,EAX
005F4562  3B D1                     CMP EDX,ECX
005F4564  5F                        POP EDI
005F4565  5E                        POP ESI
005F4566  5B                        POP EBX
005F4567  0F 9D C0                  SETGE AL
005F456A  5D                        POP EBP
005F456B  C2 10 00                  RET 0x10
LAB_005f456e:
005F456E  8B 91 E7 00 00 00         MOV EDX,dword ptr [ECX + 0xe7]
005F4574  33 C0                     XOR EAX,EAX
005F4576  3B FA                     CMP EDI,EDX
005F4578  5F                        POP EDI
005F4579  5E                        POP ESI
005F457A  5B                        POP EBX
005F457B  0F 94 C0                  SETZ AL
005F457E  5D                        POP EBP
005F457F  C2 10 00                  RET 0x10
LAB_005f4582:
005F4582  0F BF 91 D1 00 00 00      MOVSX EDX,word ptr [ECX + 0xd1]
005F4589  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F458C  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
005F458F  89 10                     MOV dword ptr [EAX],EDX
005F4591  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005F4594  0F BF 91 D3 00 00 00      MOVSX EDX,word ptr [ECX + 0xd3]
005F459B  89 10                     MOV dword ptr [EAX],EDX
005F459D  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005F45A3  8B 99 FB 00 00 00         MOV EBX,dword ptr [ECX + 0xfb]
005F45A9  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005F45AF  2B C3                     SUB EAX,EBX
005F45B1  0F AF 81 DF 00 00 00      IMUL EAX,dword ptr [ECX + 0xdf]
005F45B8  0F BF 91 D5 00 00 00      MOVSX EDX,word ptr [ECX + 0xd5]
005F45BF  03 D0                     ADD EDX,EAX
005F45C1  89 16                     MOV dword ptr [ESI],EDX
005F45C3  8B B1 EF 00 00 00         MOV ESI,dword ptr [ECX + 0xef]
005F45C9  33 D2                     XOR EDX,EDX
005F45CB  3B C6                     CMP EAX,ESI
005F45CD  0F 9D C2                  SETGE DL
005F45D0  8B C2                     MOV EAX,EDX
LAB_005f45d2:
005F45D2  5F                        POP EDI
005F45D3  5E                        POP ESI
005F45D4  5B                        POP EBX
005F45D5  5D                        POP EBP
005F45D6  C2 10 00                  RET 0x10
