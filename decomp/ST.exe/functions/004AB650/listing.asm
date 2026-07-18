FUN_004ab650:
004AB650  55                        PUSH EBP
004AB651  8B EC                     MOV EBP,ESP
004AB653  83 EC 0C                  SUB ESP,0xc
004AB656  A1 50 67 80 00            MOV EAX,[0x00806750]
004AB65B  56                        PUSH ESI
004AB65C  8B F1                     MOV ESI,ECX
004AB65E  0F BF 08                  MOVSX ECX,word ptr [EAX]
004AB661  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
004AB665  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004AB668  33 C0                     XOR EAX,EAX
004AB66A  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004AB66D  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004AB670  A0 3A 73 80 00            MOV AL,[0x0080733a]
004AB675  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004AB67B  D9 5D F8                  FSTP float ptr [EBP + -0x8]
004AB67E  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004AB681  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004AB687  D9 5D F4                  FSTP float ptr [EBP + -0xc]
004AB68A  DB 05 61 74 80 00         FILD dword ptr [0x00807461]
004AB690  D8 0C 85 84 C5 7A 00      FMUL float ptr [EAX*0x4 + 0x7ac584]
004AB697  D8 0D 8C 07 79 00         FMUL float ptr [0x0079078c]
004AB69D  D8 35 F8 73 80 00         FDIV float ptr [0x008073f8]
004AB6A3  D9 05 F0 73 80 00         FLD float ptr [0x008073f0]
004AB6A9  D8 25 E8 73 80 00         FSUB float ptr [0x008073e8]
004AB6AF  D8 C9                     FMUL ST1
004AB6B1  D8 05 D0 73 80 00         FADD float ptr [0x008073d0]
004AB6B7  D9 5D FC                  FSTP float ptr [EBP + -0x4]
004AB6BA  D9 05 F4 73 80 00         FLD float ptr [0x008073f4]
004AB6C0  D8 25 EC 73 80 00         FSUB float ptr [0x008073ec]
004AB6C6  DE C9                     FMULP
004AB6C8  D8 05 D4 73 80 00         FADD float ptr [0x008073d4]
004AB6CE  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AB6D1  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004AB6D7  DF E0                     FNSTSW AX
004AB6D9  F6 C4 01                  TEST AH,0x1
004AB6DC  74 07                     JZ 0x004ab6e5
004AB6DE  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_004ab6e5:
004AB6E5  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AB6E8  D8 5D F8                  FCOMP float ptr [EBP + -0x8]
004AB6EB  DF E0                     FNSTSW AX
004AB6ED  F6 C4 41                  TEST AH,0x41
004AB6F0  75 06                     JNZ 0x004ab6f8
004AB6F2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004AB6F5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_004ab6f8:
004AB6F8  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
004AB6FE  DF E0                     FNSTSW AX
004AB700  F6 C4 01                  TEST AH,0x1
004AB703  74 08                     JZ 0x004ab70d
004AB705  DD D8                     FSTP ST0
004AB707  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
LAB_004ab70d:
004AB70D  D8 55 F4                  FCOM float ptr [EBP + -0xc]
004AB710  DF E0                     FNSTSW AX
004AB712  F6 C4 41                  TEST AH,0x41
004AB715  75 05                     JNZ 0x004ab71c
004AB717  DD D8                     FSTP ST0
004AB719  D9 45 F4                  FLD float ptr [EBP + -0xc]
LAB_004ab71c:
004AB71C  D9 15 D4 73 80 00         FST float ptr [0x008073d4]
004AB722  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AB725  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004AB72B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004AB72E  89 15 D0 73 80 00         MOV dword ptr [0x008073d0],EDX
004AB734  E8 4F 2B 28 00            CALL 0x0072e288
004AB739  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004AB73F  A3 D8 73 80 00            MOV [0x008073d8],EAX
004AB744  E8 3F 2B 28 00            CALL 0x0072e288
004AB749  6A 00                     PUSH 0x0
004AB74B  8B CE                     MOV ECX,ESI
004AB74D  A3 DC 73 80 00            MOV [0x008073dc],EAX
004AB752  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
004AB75C  E8 E6 9D F5 FF            CALL 0x00405547
004AB761  A1 3C 74 80 00            MOV EAX,[0x0080743c]
004AB766  8B 0D FC 73 80 00         MOV ECX,dword ptr [0x008073fc]
004AB76C  8B 15 DC 73 80 00         MOV EDX,dword ptr [0x008073dc]
004AB772  25 FF 00 00 00            AND EAX,0xff
004AB777  50                        PUSH EAX
004AB778  A1 D8 73 80 00            MOV EAX,[0x008073d8]
004AB77D  51                        PUSH ECX
004AB77E  52                        PUSH EDX
004AB77F  50                        PUSH EAX
004AB780  B9 58 76 80 00            MOV ECX,0x807658
004AB785  E8 4A 7F F5 FF            CALL 0x004036d4
004AB78A  A1 61 74 80 00            MOV EAX,[0x00807461]
004AB78F  5E                        POP ESI
004AB790  48                        DEC EAX
004AB791  A3 61 74 80 00            MOV [0x00807461],EAX
004AB796  75 0A                     JNZ 0x004ab7a2
004AB798  C7 05 E0 73 80 00 00 00 00 00  MOV dword ptr [0x008073e0],0x0
LAB_004ab7a2:
004AB7A2  8B E5                     MOV ESP,EBP
004AB7A4  5D                        POP EBP
004AB7A5  C3                        RET
