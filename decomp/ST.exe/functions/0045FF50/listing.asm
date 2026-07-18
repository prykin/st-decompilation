FUN_0045ff50:
0045FF50  55                        PUSH EBP
0045FF51  8B EC                     MOV EBP,ESP
0045FF53  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0045FF56  56                        PUSH ESI
0045FF57  85 C0                     TEST EAX,EAX
0045FF59  57                        PUSH EDI
0045FF5A  8B F1                     MOV ESI,ECX
0045FF5C  0F 85 9B 00 00 00         JNZ 0x0045fffd
0045FF62  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
0045FF66  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0045FF69  50                        PUSH EAX
0045FF6A  51                        PUSH ECX
0045FF6B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045FF71  E8 83 5D FA FF            CALL 0x00405cf9
0045FF76  8B F8                     MOV EDI,EAX
0045FF78  85 FF                     TEST EDI,EDI
0045FF7A  0F 84 94 01 00 00         JZ 0x00460114
0045FF80  33 D2                     XOR EDX,EDX
0045FF82  6A 00                     PUSH 0x0
0045FF84  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
0045FF88  8B CF                     MOV ECX,EDI
0045FF8A  52                        PUSH EDX
0045FF8B  E8 96 2B FA FF            CALL 0x00402b26
0045FF90  33 C0                     XOR EAX,EAX
0045FF92  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
0045FF96  50                        PUSH EAX
0045FF97  57                        PUSH EDI
0045FF98  E8 6E 23 FA FF            CALL 0x0040230b
0045FF9D  83 C0 06                  ADD EAX,0x6
0045FFA0  83 F8 08                  CMP EAX,0x8
0045FFA3  0F 87 4E 01 00 00         JA 0x004600f7
switchD_0045ffa9::switchD:
0045FFA9  FF 24 85 20 01 46 00      JMP dword ptr [EAX*0x4 + 0x460120]
switchD_0045ffa9::caseD_1:
0045FFB0  8B CE                     MOV ECX,ESI
0045FFB2  66 C7 86 FA 00 00 00 00 00  MOV word ptr [ESI + 0xfa],0x0
0045FFBB  E8 67 39 FA FF            CALL 0x00403927
0045FFC0  5F                        POP EDI
0045FFC1  B8 02 00 00 00            MOV EAX,0x2
0045FFC6  5E                        POP ESI
0045FFC7  5D                        POP EBP
0045FFC8  C2 04 00                  RET 0x4
switchD_0045ffa9::caseD_fffffffa:
0045FFCB  66 FF 86 FA 00 00 00      INC word ptr [ESI + 0xfa]
0045FFD2  5F                        POP EDI
0045FFD3  B8 02 00 00 00            MOV EAX,0x2
0045FFD8  5E                        POP ESI
0045FFD9  5D                        POP EBP
0045FFDA  C2 04 00                  RET 0x4
switchD_0045ffa9::caseD_0:
0045FFDD  33 C9                     XOR ECX,ECX
0045FFDF  C7 86 FD 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0xfd],0x1
0045FFE9  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
0045FFED  51                        PUSH ECX
0045FFEE  8B CF                     MOV ECX,EDI
0045FFF0  E8 FD 4F FA FF            CALL 0x00404ff2
switchD_00460024::caseD_1:
0045FFF5  5F                        POP EDI
0045FFF6  33 C0                     XOR EAX,EAX
0045FFF8  5E                        POP ESI
0045FFF9  5D                        POP EBP
0045FFFA  C2 04 00                  RET 0x4
LAB_0045fffd:
0045FFFD  8B 16                     MOV EDX,dword ptr [ESI]
0045FFFF  8B CE                     MOV ECX,ESI
00460001  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
00460004  8B F8                     MOV EDI,EAX
00460006  8B 06                     MOV EAX,dword ptr [ESI]
00460008  8B CE                     MOV ECX,ESI
0046000A  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00460010  85 C0                     TEST EAX,EAX
00460012  0F 85 FC 00 00 00         JNZ 0x00460114
00460018  8D 47 01                  LEA EAX,[EDI + 0x1]
0046001B  83 F8 03                  CMP EAX,0x3
0046001E  0F 87 F0 00 00 00         JA 0x00460114
switchD_00460024::switchD:
00460024  FF 24 85 44 01 46 00      JMP dword ptr [EAX*0x4 + 0x460144]
switchD_00460024::caseD_0:
0046002B  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
00460031  83 F8 0B                  CMP EAX,0xb
00460034  74 09                     JZ 0x0046003f
00460036  83 F8 23                  CMP EAX,0x23
00460039  0F 85 B8 00 00 00         JNZ 0x004600f7
LAB_0046003f:
0046003F  83 BE 1D 02 00 00 01      CMP dword ptr [ESI + 0x21d],0x1
00460046  0F 85 AB 00 00 00         JNZ 0x004600f7
0046004C  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0046004F  33 C9                     XOR ECX,ECX
00460051  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00460057  3B C1                     CMP EAX,ECX
00460059  0F 85 98 00 00 00         JNZ 0x004600f7
0046005F  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00460062  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00460068  C1 EA 10                  SHR EDX,0x10
0046006B  81 E2 FF 00 00 00         AND EDX,0xff
00460071  33 C0                     XOR EAX,EAX
00460073  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
00460077  80 CE 02                  OR DH,0x2
0046007A  C1 E2 10                  SHL EDX,0x10
0046007D  0B D0                     OR EDX,EAX
0046007F  52                        PUSH EDX
00460080  E8 FB 66 28 00            CALL 0x006e6780
00460085  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00460088  33 D2                     XOR EDX,EDX
0046008A  DB 86 0D 01 00 00         FILD dword ptr [ESI + 0x10d]
00460090  66 8B 56 18               MOV DX,word ptr [ESI + 0x18]
00460094  C1 E9 10                  SHR ECX,0x10
00460097  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0046009D  81 E1 FF 00 00 00         AND ECX,0xff
004600A3  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
004600A7  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
004600AD  80 CD 02                  OR CH,0x2
004600B0  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004600B3  C1 E1 10                  SHL ECX,0x10
004600B6  0B CA                     OR ECX,EDX
004600B8  51                        PUSH ECX
004600B9  6A 28                     PUSH 0x28
004600BB  51                        PUSH ECX
004600BC  D9 1C 24                  FSTP float ptr [ESP]
004600BF  DB 45 08                  FILD dword ptr [EBP + 0x8]
004600C2  51                        PUSH ECX
004600C3  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
004600C7  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004600CD  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
004600D0  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004600D6  D9 1C 24                  FSTP float ptr [ESP]
004600D9  DB 45 08                  FILD dword ptr [EBP + 0x8]
004600DC  51                        PUSH ECX
004600DD  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004600E3  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004600E9  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004600EF  D9 1C 24                  FSTP float ptr [ESP]
004600F2  E8 19 66 28 00            CALL 0x006e6710
switchD_0045ffa9::caseD_fffffffb:
004600F7  5F                        POP EDI
004600F8  B8 02 00 00 00            MOV EAX,0x2
004600FD  5E                        POP ESI
004600FE  5D                        POP EBP
004600FF  C2 04 00                  RET 0x4
switchD_00460024::caseD_2:
00460102  8B 16                     MOV EDX,dword ptr [ESI]
00460104  8B CE                     MOV ECX,ESI
00460106  FF 52 20                  CALL dword ptr [EDX + 0x20]
00460109  5F                        POP EDI
0046010A  B8 03 00 00 00            MOV EAX,0x3
0046010F  5E                        POP ESI
00460110  5D                        POP EBP
00460111  C2 04 00                  RET 0x4
switchD_00460024::caseD_ffffffff:
00460114  5F                        POP EDI
00460115  83 C8 FF                  OR EAX,0xffffffff
00460118  5E                        POP ESI
00460119  5D                        POP EBP
0046011A  C2 04 00                  RET 0x4
