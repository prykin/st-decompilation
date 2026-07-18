FUN_006dcd60:
006DCD60  55                        PUSH EBP
006DCD61  8B EC                     MOV EBP,ESP
006DCD63  83 EC 28                  SUB ESP,0x28
006DCD66  53                        PUSH EBX
006DCD67  56                        PUSH ESI
006DCD68  8B F1                     MOV ESI,ECX
006DCD6A  8B 9E 58 03 00 00         MOV EBX,dword ptr [ESI + 0x358]
006DCD70  85 DB                     TEST EBX,EBX
006DCD72  0F 84 B8 02 00 00         JZ 0x006dd030
006DCD78  F6 86 A8 00 00 00 08      TEST byte ptr [ESI + 0xa8],0x8
006DCD7F  0F 85 AB 02 00 00         JNZ 0x006dd030
006DCD85  DD 46 68                  FLD double ptr [ESI + 0x68]
006DCD88  DC 66 60                  FSUB double ptr [ESI + 0x60]
006DCD8B  DD 46 78                  FLD double ptr [ESI + 0x78]
006DCD8E  DC 66 70                  FSUB double ptr [ESI + 0x70]
006DCD91  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
006DCD97  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DCD9D  DC 0D 68 DF 79 00         FMUL double ptr [0x0079df68]
006DCDA3  DE C1                     FADDP
006DCDA5  D9 C1                     FLD ST1
006DCDA7  D8 D9                     FCOMP
006DCDA9  DF E0                     FNSTSW AX
006DCDAB  F6 C4 41                  TEST AH,0x41
006DCDAE  75 02                     JNZ 0x006dcdb2
006DCDB0  D9 C9                     FXCH
LAB_006dcdb2:
006DCDB2  D8 E1                     FSUB ST0,ST1
006DCDB4  57                        PUSH EDI
006DCDB5  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DCDBB  D9 C9                     FXCH
006DCDBD  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
006DCDC3  DE C1                     FADDP
006DCDC5  DC B6 68 03 00 00         FDIV double ptr [ESI + 0x368]
006DCDCB  DC 05 88 CD 79 00         FADD double ptr [0x0079cd88]
006DCDD1  E8 B2 14 05 00            CALL 0x0072e288
006DCDD6  8B F8                     MOV EDI,EAX
006DCDD8  8B 43 28                  MOV EAX,dword ptr [EBX + 0x28]
006DCDDB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006DCDDE  3B C7                     CMP EAX,EDI
006DCDE0  DB 45 FC                  FILD dword ptr [EBP + -0x4]
006DCDE3  DC 8E 68 03 00 00         FMUL double ptr [ESI + 0x368]
006DCDE9  DD 5D E0                  FSTP double ptr [EBP + -0x20]
006DCDEC  0F 8D 82 00 00 00         JGE 0x006dce74
006DCDF2  8B DF                     MOV EBX,EDI
006DCDF4  0F AF DF                  IMUL EBX,EDI
006DCDF7  8D 43 18                  LEA EAX,[EBX + 0x18]
006DCDFA  50                        PUSH EAX
006DCDFB  8B 86 58 03 00 00         MOV EAX,dword ptr [ESI + 0x358]
006DCE01  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006DCE04  51                        PUSH ECX
006DCE05  E8 46 01 FD FF            CALL 0x006acf50
006DCE0A  8B 96 58 03 00 00         MOV EDX,dword ptr [ESI + 0x358]
006DCE10  83 C3 10                  ADD EBX,0x10
006DCE13  53                        PUSH EBX
006DCE14  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
006DCE17  8B 86 58 03 00 00         MOV EAX,dword ptr [ESI + 0x358]
006DCE1D  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006DCE20  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
006DCE23  8B 96 58 03 00 00         MOV EDX,dword ptr [ESI + 0x358]
006DCE29  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
006DCE2C  50                        PUSH EAX
006DCE2D  E8 1E 01 FD FF            CALL 0x006acf50
006DCE32  8B 8E 58 03 00 00         MOV ECX,dword ptr [ESI + 0x358]
006DCE38  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
006DCE3B  8B 86 58 03 00 00         MOV EAX,dword ptr [ESI + 0x358]
006DCE41  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006DCE44  83 C2 08                  ADD EDX,0x8
006DCE47  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
006DCE4A  8B 86 58 03 00 00         MOV EAX,dword ptr [ESI + 0x358]
006DCE50  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006DCE53  89 8E 8C 03 00 00         MOV dword ptr [ESI + 0x38c],ECX
006DCE59  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
006DCE5C  89 96 90 03 00 00         MOV dword ptr [ESI + 0x390],EDX
006DCE62  89 78 28                  MOV dword ptr [EAX + 0x28],EDI
006DCE65  8B 86 58 03 00 00         MOV EAX,dword ptr [ESI + 0x358]
006DCE6B  89 78 2C                  MOV dword ptr [EAX + 0x2c],EDI
006DCE6E  89 BE 7C 03 00 00         MOV dword ptr [ESI + 0x37c],EDI
LAB_006dce74:
006DCE74  DD 45 E0                  FLD double ptr [EBP + -0x20]
006DCE77  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006DCE7D  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
006DCE83  83 F8 03                  CMP EAX,0x3
006DCE86  DD 55 E8                  FST double ptr [EBP + -0x18]
006DCE89  DD 46 78                  FLD double ptr [ESI + 0x78]
006DCE8C  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
006DCE92  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006DCE95  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006DCE98  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006DCE9B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006DCE9E  DD 5D E8                  FSTP double ptr [EBP + -0x18]
006DCEA1  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DCEA7  DC 0D 68 DF 79 00         FMUL double ptr [0x0079df68]
006DCEAD  DD 46 70                  FLD double ptr [ESI + 0x70]
006DCEB0  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
006DCEB6  DE E9                     FSUBP
006DCEB8  DD 5D F0                  FSTP double ptr [EBP + -0x10]
006DCEBB  0F 87 CB 00 00 00         JA 0x006dcf8c
switchD_006dcec1::switchD:
006DCEC1  FF 24 85 38 D0 6D 00      JMP dword ptr [EAX*0x4 + 0x6dd038]
switchD_006dcec1::caseD_0:
006DCEC8  DD D8                     FSTP ST0
006DCECA  DD 46 78                  FLD double ptr [ESI + 0x78]
006DCECD  DC C0                     FADD ST0,ST0
006DCECF  DD 55 F0                  FST double ptr [EBP + -0x10]
006DCED2  DD 46 60                  FLD double ptr [ESI + 0x60]
006DCED5  D9 E0                     FCHS
006DCED7  DC 65 E8                  FSUB double ptr [EBP + -0x18]
006DCEDA  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DCEE0  DE C1                     FADDP
006DCEE2  DD 46 68                  FLD double ptr [ESI + 0x68]
006DCEE5  DC 65 E8                  FSUB double ptr [EBP + -0x18]
006DCEE8  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DCEEE  DC 45 F0                  FADD double ptr [EBP + -0x10]
006DCEF1  E9 93 00 00 00            JMP 0x006dcf89
switchD_006dcec1::caseD_1:
006DCEF6  DD D8                     FSTP ST0
006DCEF8  DD 46 60                  FLD double ptr [ESI + 0x60]
006DCEFB  D9 E0                     FCHS
006DCEFD  DD 55 F8                  FST double ptr [EBP + -0x8]
006DCF00  D9 C0                     FLD ST0
006DCF02  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
006DCF08  DD 55 D8                  FST double ptr [EBP + -0x28]
006DCF0B  DD 45 F0                  FLD double ptr [EBP + -0x10]
006DCF0E  DE E2                     FSUBRP ST2,ST0
006DCF10  D9 C9                     FXCH
006DCF12  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DCF18  D8 C1                     FADD ST0,ST1
006DCF1A  D9 C9                     FXCH
006DCF1C  DD D8                     FSTP ST0
006DCF1E  DD 45 E8                  FLD double ptr [EBP + -0x18]
006DCF21  DC 65 F8                  FSUB double ptr [EBP + -0x8]
006DCF24  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DCF2A  DC 45 D8                  FADD double ptr [EBP + -0x28]
006DCF2D  EB 5A                     JMP 0x006dcf89
switchD_006dcec1::caseD_2:
006DCF2F  DD D8                     FSTP ST0
006DCF31  DD 45 F0                  FLD double ptr [EBP + -0x10]
006DCF34  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
006DCF3A  DD 55 D8                  FST double ptr [EBP + -0x28]
006DCF3D  DD 46 68                  FLD double ptr [ESI + 0x68]
006DCF40  DC 65 F0                  FSUB double ptr [EBP + -0x10]
006DCF43  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DCF49  DE C1                     FADDP
006DCF4B  DD 46 60                  FLD double ptr [ESI + 0x60]
006DCF4E  D9 E0                     FCHS
006DCF50  DC 65 F0                  FSUB double ptr [EBP + -0x10]
006DCF53  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DCF59  DC 45 D8                  FADD double ptr [EBP + -0x28]
006DCF5C  EB 2B                     JMP 0x006dcf89
switchD_006dcec1::caseD_3:
006DCF5E  DD D8                     FSTP ST0
006DCF60  DD 46 68                  FLD double ptr [ESI + 0x68]
006DCF63  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
006DCF69  DD 55 D8                  FST double ptr [EBP + -0x28]
006DCF6C  DD 45 E8                  FLD double ptr [EBP + -0x18]
006DCF6F  DC 66 68                  FSUB double ptr [ESI + 0x68]
006DCF72  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DCF78  DE C1                     FADDP
006DCF7A  DD 45 F0                  FLD double ptr [EBP + -0x10]
006DCF7D  DC 66 68                  FSUB double ptr [ESI + 0x68]
006DCF80  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DCF86  DC 45 D8                  FADD double ptr [EBP + -0x28]
LAB_006dcf89:
006DCF89  DD 5D F8                  FSTP double ptr [EBP + -0x8]
switchD_006dcec1::default:
006DCF8C  DC B6 68 03 00 00         FDIV double ptr [ESI + 0x368]
006DCF92  83 EC 08                  SUB ESP,0x8
006DCF95  DD 1C 24                  FSTP double ptr [ESP]
006DCF98  E8 B3 34 05 00            CALL 0x00730450
006DCF9D  DC 8E 68 03 00 00         FMUL double ptr [ESI + 0x368]
006DCFA3  DD 5D E8                  FSTP double ptr [EBP + -0x18]
006DCFA6  DD 45 F8                  FLD double ptr [EBP + -0x8]
006DCFA9  DC B6 68 03 00 00         FDIV double ptr [ESI + 0x368]
006DCFAF  DD 1C 24                  FSTP double ptr [ESP]
006DCFB2  E8 99 34 05 00            CALL 0x00730450
006DCFB7  DC 8E 68 03 00 00         FMUL double ptr [ESI + 0x368]
006DCFBD  83 C4 08                  ADD ESP,0x8
006DCFC0  DD 5D F8                  FSTP double ptr [EBP + -0x8]
006DCFC3  DD 45 E0                  FLD double ptr [EBP + -0x20]
006DCFC6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006DCFC9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006DCFCC  DC 65 F8                  FSUB double ptr [EBP + -0x8]
006DCFCF  50                        PUSH EAX
006DCFD0  51                        PUSH ECX
006DCFD1  83 EC 08                  SUB ESP,0x8
006DCFD4  8B 8E 58 03 00 00         MOV ECX,dword ptr [ESI + 0x358]
006DCFDA  D9 E0                     FCHS
006DCFDC  DD 1C 24                  FSTP double ptr [ESP]
006DCFDF  DD 45 E0                  FLD double ptr [EBP + -0x20]
006DCFE2  DC 65 E8                  FSUB double ptr [EBP + -0x18]
006DCFE5  83 EC 08                  SUB ESP,0x8
006DCFE8  83 EC 08                  SUB ESP,0x8
006DCFEB  DD 5C 24 08               FSTP double ptr [ESP + 0x8]
006DCFEF  DD 45 E8                  FLD double ptr [EBP + -0x18]
006DCFF2  D9 E0                     FCHS
006DCFF4  DD 1C 24                  FSTP double ptr [ESP]
006DCFF7  E8 E4 06 00 00            CALL 0x006dd6e0
006DCFFC  8B 8E 58 03 00 00         MOV ECX,dword ptr [ESI + 0x358]
006DD002  57                        PUSH EDI
006DD003  57                        PUSH EDI
006DD004  6A 00                     PUSH 0x0
006DD006  6A 00                     PUSH 0x0
006DD008  E8 53 06 00 00            CALL 0x006dd660
006DD00D  8B 96 58 03 00 00         MOV EDX,dword ptr [ESI + 0x358]
006DD013  89 BA 70 03 00 00         MOV dword ptr [EDX + 0x370],EDI
006DD019  8B 86 58 03 00 00         MOV EAX,dword ptr [ESI + 0x358]
006DD01F  89 BE 70 03 00 00         MOV dword ptr [ESI + 0x370],EDI
006DD025  5F                        POP EDI
006DD026  C7 80 34 01 00 00 01 00 00 00  MOV dword ptr [EAX + 0x134],0x1
LAB_006dd030:
006DD030  5E                        POP ESI
006DD031  5B                        POP EBX
006DD032  8B E5                     MOV ESP,EBP
006DD034  5D                        POP EBP
006DD035  C3                        RET
