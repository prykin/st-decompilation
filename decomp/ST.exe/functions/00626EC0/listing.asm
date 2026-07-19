FUN_00626ec0:
00626EC0  33 D2                     XOR EDX,EDX
LAB_00626ec2:
00626EC2  33 C0                     XOR EAX,EAX
00626EC4  8A 91 AD 02 00 00         MOV DL,byte ptr [ECX + 0x2ad]
00626ECA  8B CA                     MOV ECX,EDX
00626ECC  83 F9 03                  CMP ECX,0x3
00626ECF  77 1E                     JA 0x00626eef
switchD_00626ed1::switchD:
00626ED1  FF 24 8D F0 6E 62 00      JMP dword ptr [ECX*0x4 + 0x626ef0]
switchD_00626ed1::caseD_0:
00626ED8  B8 A6 00 00 00            MOV EAX,0xa6
00626EDD  C3                        RET
switchD_00626ed1::caseD_1:
00626EDE  B8 A7 00 00 00            MOV EAX,0xa7
00626EE3  C3                        RET
switchD_00626ed1::caseD_2:
00626EE4  B8 BD 00 00 00            MOV EAX,0xbd
00626EE9  C3                        RET
switchD_00626ed1::caseD_3:
00626EEA  B8 AF 00 00 00            MOV EAX,0xaf
switchD_00626ed1::default:
00626EEF  C3                        RET
