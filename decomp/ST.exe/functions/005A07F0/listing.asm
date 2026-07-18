FUN_005a07f0:
005A07F0  56                        PUSH ESI
005A07F1  57                        PUSH EDI
005A07F2  33 FF                     XOR EDI,EDI
005A07F4  8B F1                     MOV ESI,ECX
005A07F6  57                        PUSH EDI
005A07F7  57                        PUSH EDI
005A07F8  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005A07FB  57                        PUSH EDI
005A07FC  57                        PUSH EDI
005A07FD  57                        PUSH EDI
005A07FE  57                        PUSH EDI
005A07FF  68 2F 00 00 40            PUSH 0x4000002f
005A0804  6A 02                     PUSH 0x2
005A0806  68 A5 C0 00 00            PUSH 0xc0a5
005A080B  6A 02                     PUSH 0x2
005A080D  50                        PUSH EAX
005A080E  57                        PUSH EDI
005A080F  E8 AB 25 E6 FF            CALL 0x00402dbf
005A0814  57                        PUSH EDI
005A0815  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005A0818  57                        PUSH EDI
005A0819  57                        PUSH EDI
005A081A  57                        PUSH EDI
005A081B  57                        PUSH EDI
005A081C  57                        PUSH EDI
005A081D  68 31 00 00 08            PUSH 0x8000031
005A0822  6A 02                     PUSH 0x2
005A0824  68 A4 C0 00 00            PUSH 0xc0a4
005A0829  6A 02                     PUSH 0x2
005A082B  51                        PUSH ECX
005A082C  57                        PUSH EDI
005A082D  E8 8D 25 E6 FF            CALL 0x00402dbf
005A0832  83 C4 60                  ADD ESP,0x60
005A0835  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
005A0838  57                        PUSH EDI
005A0839  57                        PUSH EDI
005A083A  57                        PUSH EDI
005A083B  57                        PUSH EDI
005A083C  57                        PUSH EDI
005A083D  57                        PUSH EDI
005A083E  6A 1C                     PUSH 0x1c
005A0840  6A 02                     PUSH 0x2
005A0842  68 A1 C0 00 00            PUSH 0xc0a1
005A0847  6A 02                     PUSH 0x2
005A0849  52                        PUSH EDX
005A084A  57                        PUSH EDI
005A084B  E8 6F 25 E6 FF            CALL 0x00402dbf
005A0850  8B 86 10 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b10]
005A0856  83 C4 30                  ADD ESP,0x30
005A0859  3B C7                     CMP EAX,EDI
005A085B  74 09                     JZ 0x005a0866
005A085D  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0860  50                        PUSH EAX
005A0861  E8 4A 4E 14 00            CALL 0x006e56b0
LAB_005a0866:
005A0866  8B 86 14 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b14]
005A086C  89 BE 10 1B 00 00         MOV dword ptr [ESI + 0x1b10],EDI
005A0872  3B C7                     CMP EAX,EDI
005A0874  74 09                     JZ 0x005a087f
005A0876  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0879  50                        PUSH EAX
005A087A  E8 31 4E 14 00            CALL 0x006e56b0
LAB_005a087f:
005A087F  8B 86 18 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b18]
005A0885  89 BE 14 1B 00 00         MOV dword ptr [ESI + 0x1b14],EDI
005A088B  3B C7                     CMP EAX,EDI
005A088D  74 09                     JZ 0x005a0898
005A088F  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0892  50                        PUSH EAX
005A0893  E8 18 4E 14 00            CALL 0x006e56b0
LAB_005a0898:
005A0898  8B 86 1C 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b1c]
005A089E  89 BE 18 1B 00 00         MOV dword ptr [ESI + 0x1b18],EDI
005A08A4  3B C7                     CMP EAX,EDI
005A08A6  74 09                     JZ 0x005a08b1
005A08A8  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A08AB  50                        PUSH EAX
005A08AC  E8 FF 4D 14 00            CALL 0x006e56b0
LAB_005a08b1:
005A08B1  8B 86 20 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b20]
005A08B7  89 BE 1C 1B 00 00         MOV dword ptr [ESI + 0x1b1c],EDI
005A08BD  3B C7                     CMP EAX,EDI
005A08BF  74 09                     JZ 0x005a08ca
005A08C1  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A08C4  50                        PUSH EAX
005A08C5  E8 E6 4D 14 00            CALL 0x006e56b0
LAB_005a08ca:
005A08CA  8B 86 24 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b24]
005A08D0  89 BE 20 1B 00 00         MOV dword ptr [ESI + 0x1b20],EDI
005A08D6  3B C7                     CMP EAX,EDI
005A08D8  74 09                     JZ 0x005a08e3
005A08DA  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A08DD  50                        PUSH EAX
005A08DE  E8 CD 4D 14 00            CALL 0x006e56b0
LAB_005a08e3:
005A08E3  8B 86 C4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac4]
005A08E9  89 BE 24 1B 00 00         MOV dword ptr [ESI + 0x1b24],EDI
005A08EF  3B C7                     CMP EAX,EDI
005A08F1  74 09                     JZ 0x005a08fc
005A08F3  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A08F6  50                        PUSH EAX
005A08F7  E8 B4 4D 14 00            CALL 0x006e56b0
LAB_005a08fc:
005A08FC  8B 86 C8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac8]
005A0902  89 BE C4 1A 00 00         MOV dword ptr [ESI + 0x1ac4],EDI
005A0908  3B C7                     CMP EAX,EDI
005A090A  74 09                     JZ 0x005a0915
005A090C  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A090F  50                        PUSH EAX
005A0910  E8 9B 4D 14 00            CALL 0x006e56b0
LAB_005a0915:
005A0915  8B 86 A2 1E 00 00         MOV EAX,dword ptr [ESI + 0x1ea2]
005A091B  89 BE C8 1A 00 00         MOV dword ptr [ESI + 0x1ac8],EDI
005A0921  3B C7                     CMP EAX,EDI
005A0923  74 06                     JZ 0x005a092b
005A0925  50                        PUSH EAX
005A0926  E8 45 4C 11 00            CALL 0x006b5570
LAB_005a092b:
005A092B  8B 86 E8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae8]
005A0931  89 BE A2 1E 00 00         MOV dword ptr [ESI + 0x1ea2],EDI
005A0937  3B C7                     CMP EAX,EDI
005A0939  74 06                     JZ 0x005a0941
005A093B  50                        PUSH EAX
005A093C  E8 2F 4C 11 00            CALL 0x006b5570
LAB_005a0941:
005A0941  8B 86 EC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1aec]
005A0947  89 BE E8 1A 00 00         MOV dword ptr [ESI + 0x1ae8],EDI
005A094D  3B C7                     CMP EAX,EDI
005A094F  74 06                     JZ 0x005a0957
005A0951  50                        PUSH EAX
005A0952  E8 19 4C 11 00            CALL 0x006b5570
LAB_005a0957:
005A0957  8B 86 A6 1E 00 00         MOV EAX,dword ptr [ESI + 0x1ea6]
005A095D  89 BE EC 1A 00 00         MOV dword ptr [ESI + 0x1aec],EDI
005A0963  3B C7                     CMP EAX,EDI
005A0965  74 06                     JZ 0x005a096d
005A0967  50                        PUSH EAX
005A0968  E8 A3 D7 10 00            CALL 0x006ae110
LAB_005a096d:
005A096D  8B 86 AA 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eaa]
005A0973  89 BE A6 1E 00 00         MOV dword ptr [ESI + 0x1ea6],EDI
005A0979  3B C7                     CMP EAX,EDI
005A097B  74 06                     JZ 0x005a0983
005A097D  50                        PUSH EAX
005A097E  E8 8D D7 10 00            CALL 0x006ae110
LAB_005a0983:
005A0983  8B 8E 8E 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e8e]
005A0989  8D 86 8E 1E 00 00         LEA EAX,[ESI + 0x1e8e]
005A098F  3B CF                     CMP ECX,EDI
005A0991  89 BE AA 1E 00 00         MOV dword ptr [ESI + 0x1eaa],EDI
005A0997  74 06                     JZ 0x005a099f
005A0999  50                        PUSH EAX
005A099A  E8 C1 A6 10 00            CALL 0x006ab060
LAB_005a099f:
005A099F  8B 8E 92 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e92]
005A09A5  8D 86 92 1E 00 00         LEA EAX,[ESI + 0x1e92]
005A09AB  3B CF                     CMP ECX,EDI
005A09AD  74 06                     JZ 0x005a09b5
005A09AF  50                        PUSH EAX
005A09B0  E8 AB A6 10 00            CALL 0x006ab060
LAB_005a09b5:
005A09B5  8B 8E 9A 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e9a]
005A09BB  8D 86 9A 1E 00 00         LEA EAX,[ESI + 0x1e9a]
005A09C1  3B CF                     CMP ECX,EDI
005A09C3  5F                        POP EDI
005A09C4  5E                        POP ESI
005A09C5  74 06                     JZ 0x005a09cd
005A09C7  50                        PUSH EAX
005A09C8  E8 93 A6 10 00            CALL 0x006ab060
LAB_005a09cd:
005A09CD  C3                        RET
