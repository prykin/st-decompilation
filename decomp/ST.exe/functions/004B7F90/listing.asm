TLOBaseTy::sub_004B7F90:
004B7F90  55                        PUSH EBP
004B7F91  8B EC                     MOV EBP,ESP
004B7F93  53                        PUSH EBX
004B7F94  56                        PUSH ESI
004B7F95  8B F1                     MOV ESI,ECX
004B7F97  33 DB                     XOR EBX,EBX
004B7F99  57                        PUSH EDI
004B7F9A  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004B7FA0  40                        INC EAX
004B7FA1  83 F8 06                  CMP EAX,0x6
004B7FA4  77 5D                     JA 0x004b8003
switchD_004b7fa6::switchD:
004B7FA6  FF 24 85 74 80 4B 00      JMP dword ptr [EAX*0x4 + 0x4b8074]
switchD_004b7fa6::caseD_0:
004B7FAD  8B 86 55 02 00 00         MOV EAX,dword ptr [ESI + 0x255]
004B7FB3  85 C0                     TEST EAX,EAX
004B7FB5  74 4C                     JZ 0x004b8003
004B7FB7  83 7D 08 02               CMP dword ptr [EBP + 0x8],0x2
004B7FBB  75 46                     JNZ 0x004b8003
004B7FBD  8B 86 59 02 00 00         MOV EAX,dword ptr [ESI + 0x259]
004B7FC3  85 C0                     TEST EAX,EAX
004B7FC5  74 3C                     JZ 0x004b8003
LAB_004b7fc7:
004B7FC7  5F                        POP EDI
004B7FC8  8B C3                     MOV EAX,EBX
004B7FCA  5E                        POP ESI
004B7FCB  5B                        POP EBX
004B7FCC  5D                        POP EBP
004B7FCD  C2 04 00                  RET 0x4
switchD_004b7fa6::caseD_4:
004B7FD0  8B 86 DC 03 00 00         MOV EAX,dword ptr [ESI + 0x3dc]
004B7FD6  85 C0                     TEST EAX,EAX
004B7FD8  75 14                     JNZ 0x004b7fee
004B7FDA  8B 86 6C 04 00 00         MOV EAX,dword ptr [ESI + 0x46c]
004B7FE0  85 C0                     TEST EAX,EAX
004B7FE2  74 1F                     JZ 0x004b8003
004B7FE4  83 F8 01                  CMP EAX,0x1
004B7FE7  74 1A                     JZ 0x004b8003
004B7FE9  83 F8 02                  CMP EAX,0x2
004B7FEC  74 15                     JZ 0x004b8003
LAB_004b7fee:
004B7FEE  33 DB                     XOR EBX,EBX
004B7FF0  EB 66                     JMP 0x004b8058
switchD_004b7fa6::caseD_5:
004B7FF2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B7FF5  85 C0                     TEST EAX,EAX
004B7FF7  74 0A                     JZ 0x004b8003
004B7FF9  83 F8 01                  CMP EAX,0x1
004B7FFC  74 05                     JZ 0x004b8003
004B7FFE  83 F8 06                  CMP EAX,0x6
004B8001  75 55                     JNZ 0x004b8058
switchD_004b7fa6::caseD_1:
004B8003  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004B8009  6A 0E                     PUSH 0xe
004B800B  8B CF                     MOV ECX,EDI
004B800D  E8 9D C2 F4 FF            CALL 0x004042af
004B8012  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004B8018  3B 81 08 02 00 00         CMP EAX,dword ptr [ECX + 0x208]
004B801E  74 17                     JZ 0x004b8037
004B8020  6A 0E                     PUSH 0xe
004B8022  8B CF                     MOV ECX,EDI
004B8024  E8 86 C2 F4 FF            CALL 0x004042af
004B8029  8B 96 F5 01 00 00         MOV EDX,dword ptr [ESI + 0x1f5]
004B802F  3B 82 0C 02 00 00         CMP EAX,dword ptr [EDX + 0x20c]
004B8035  75 21                     JNZ 0x004b8058
LAB_004b8037:
004B8037  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004B803D  8B 0C 85 10 1A 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x791a10]
004B8044  85 C9                     TEST ECX,ECX
004B8046  74 0B                     JZ 0x004b8053
004B8048  8B CE                     MOV ECX,ESI
004B804A  E8 C6 D4 F4 FF            CALL 0x00405515
004B804F  8B D8                     MOV EBX,EAX
004B8051  EB 05                     JMP 0x004b8058
switchD_004b7fa6::caseD_ffffffff:
004B8053  BB 01 00 00 00            MOV EBX,0x1
TLOBaseTy::sub_004B7F90::cf_common_exit_004B8058:
004B8058  83 7D 08 03               CMP dword ptr [EBP + 0x8],0x3
004B805C  0F 85 65 FF FF FF         JNZ 0x004b7fc7
004B8062  6A 01                     PUSH 0x1
004B8064  8B CE                     MOV ECX,ESI
004B8066  E8 3A 95 F4 FF            CALL 0x004015a5
004B806B  5F                        POP EDI
004B806C  5E                        POP ESI
004B806D  5B                        POP EBX
004B806E  5D                        POP EBP
004B806F  C2 04 00                  RET 0x4
