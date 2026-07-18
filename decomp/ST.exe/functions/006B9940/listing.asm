FUN_006b9940:
006B9940  55                        PUSH EBP
006B9941  8B EC                     MOV EBP,ESP
006B9943  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B9946  85 C0                     TEST EAX,EAX
006B9948  74 06                     JZ 0x006b9950
006B994A  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_006b9950:
006B9950  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B9953  56                        PUSH ESI
006B9954  57                        PUSH EDI
006B9955  68 10 05 00 00            PUSH 0x510
006B995A  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006B9960  E8 AB 12 FF FF            CALL 0x006aac10
006B9965  8B F8                     MOV EDI,EAX
006B9967  85 FF                     TEST EDI,EDI
006B9969  75 0B                     JNZ 0x006b9976
006B996B  5F                        POP EDI
006B996C  B8 FE FF FF FF            MOV EAX,0xfffffffe
006B9971  5E                        POP ESI
006B9972  5D                        POP EBP
006B9973  C2 10 00                  RET 0x10
LAB_006b9976:
006B9976  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B9979  53                        PUSH EBX
006B997A  8D 5F 2C                  LEA EBX,[EDI + 0x2c]
006B997D  6A 00                     PUSH 0x0
006B997F  53                        PUSH EBX
006B9980  51                        PUSH ECX
006B9981  E8 A4 2C 07 00            CALL 0x0072c62a
006B9986  8B F0                     MOV ESI,EAX
006B9988  85 F6                     TEST ESI,ESI
006B998A  75 57                     JNZ 0x006b99e3
006B998C  8B 03                     MOV EAX,dword ptr [EBX]
006B998E  8D 5F 30                  LEA EBX,[EDI + 0x30]
006B9991  53                        PUSH EBX
006B9992  68 88 FD 79 00            PUSH 0x79fd88
006B9997  8B 10                     MOV EDX,dword ptr [EAX]
006B9999  50                        PUSH EAX
006B999A  FF 12                     CALL dword ptr [EDX]
006B999C  8B F0                     MOV ESI,EAX
006B999E  85 F6                     TEST ESI,ESI
006B99A0  75 41                     JNZ 0x006b99e3
006B99A2  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B99A5  85 C0                     TEST EAX,EAX
006B99A7  74 34                     JZ 0x006b99dd
006B99A9  8B 03                     MOV EAX,dword ptr [EBX]
006B99AB  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B99AE  6A 55                     PUSH 0x55
006B99B0  52                        PUSH EDX
006B99B1  8B 08                     MOV ECX,dword ptr [EAX]
006B99B3  50                        PUSH EAX
006B99B4  FF 51 50                  CALL dword ptr [ECX + 0x50]
006B99B7  8B F0                     MOV ESI,EAX
006B99B9  85 F6                     TEST ESI,ESI
006B99BB  75 26                     JNZ 0x006b99e3
006B99BD  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B99C0  50                        PUSH EAX
006B99C1  57                        PUSH EDI
006B99C2  E8 79 00 00 00            CALL 0x006b9a40
006B99C7  8B F0                     MOV ESI,EAX
006B99C9  85 F6                     TEST ESI,ESI
006B99CB  75 16                     JNZ 0x006b99e3
006B99CD  8B 1B                     MOV EBX,dword ptr [EBX]
006B99CF  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B99D2  6A 08                     PUSH 0x8
006B99D4  52                        PUSH EDX
006B99D5  8B 0B                     MOV ECX,dword ptr [EBX]
006B99D7  53                        PUSH EBX
006B99D8  FF 51 50                  CALL dword ptr [ECX + 0x50]
006B99DB  8B F0                     MOV ESI,EAX
LAB_006b99dd:
006B99DD  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B99E0  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
LAB_006b99e3:
006B99E3  8D 8F F0 04 00 00         LEA ECX,[EDI + 0x4f0]
006B99E9  51                        PUSH ECX
006B99EA  FF 15 88 BB 85 00         CALL dword ptr [0x0085bb88]
006B99F0  85 F6                     TEST ESI,ESI
006B99F2  5B                        POP EBX
006B99F3  74 2F                     JZ 0x006b9a24
006B99F5  57                        PUSH EDI
006B99F6  E8 05 0C 00 00            CALL 0x006ba600
006B99FB  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B99FE  85 C0                     TEST EAX,EAX
006B9A00  74 06                     JZ 0x006b9a08
006B9A02  50                        PUSH EAX
006B9A03  E8 58 16 FF FF            CALL 0x006ab060
LAB_006b9a08:
006B9A08  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B9A0E  6A 6D                     PUSH 0x6d
006B9A10  68 48 DC 7E 00            PUSH 0x7edc48
006B9A15  52                        PUSH EDX
006B9A16  56                        PUSH ESI
006B9A17  E8 24 C4 FE FF            CALL 0x006a5e40
006B9A1C  8B C6                     MOV EAX,ESI
006B9A1E  5F                        POP EDI
006B9A1F  5E                        POP ESI
006B9A20  5D                        POP EBP
006B9A21  C2 10 00                  RET 0x10
LAB_006b9a24:
006B9A24  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B9A27  89 38                     MOV dword ptr [EAX],EDI
006B9A29  5F                        POP EDI
006B9A2A  33 C0                     XOR EAX,EAX
006B9A2C  5E                        POP ESI
006B9A2D  5D                        POP EBP
006B9A2E  C2 10 00                  RET 0x10
