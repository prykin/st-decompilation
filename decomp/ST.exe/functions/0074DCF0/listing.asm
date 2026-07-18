FUN_0074dcf0:
0074DCF0  83 EC 28                  SUB ESP,0x28
0074DCF3  83 64 24 00 00            AND dword ptr [ESP],0x0
0074DCF8  83 7C 24 30 FF            CMP dword ptr [ESP + 0x30],-0x1
0074DCFD  53                        PUSH EBX
0074DCFE  55                        PUSH EBP
0074DCFF  56                        PUSH ESI
0074DD00  57                        PUSH EDI
0074DD01  74 11                     JZ 0x0074dd14
0074DD03  83 7C 24 40 00            CMP dword ptr [ESP + 0x40],0x0
0074DD08  74 0A                     JZ 0x0074dd14
0074DD0A  FF 15 04 BD 85 00         CALL dword ptr [0x0085bd04]
0074DD10  89 44 24 14               MOV dword ptr [ESP + 0x14],EAX
LAB_0074dd14:
0074DD14  8B 7C 24 44               MOV EDI,dword ptr [ESP + 0x44]
0074DD18  8B 2D FC BD 85 00         MOV EBP,dword ptr [0x0085bdfc]
0074DD1E  F7 DF                     NEG EDI
0074DD20  1B FF                     SBB EDI,EDI
0074DD22  83 E7 08                  AND EDI,0x8
0074DD25  83 C7 40                  ADD EDI,0x40
LAB_0074dd28:
0074DD28  8B 74 24 40               MOV ESI,dword ptr [ESP + 0x40]
0074DD2C  83 FE 0A                  CMP ESI,0xa
0074DD2F  76 03                     JBE 0x0074dd34
0074DD31  6A 0A                     PUSH 0xa
0074DD33  5E                        POP ESI
LAB_0074dd34:
0074DD34  57                        PUSH EDI
0074DD35  56                        PUSH ESI
0074DD36  8D 44 24 44               LEA EAX,[ESP + 0x44]
0074DD3A  6A 00                     PUSH 0x0
0074DD3C  50                        PUSH EAX
0074DD3D  6A 01                     PUSH 0x1
0074DD3F  FF 15 D8 BD 85 00         CALL dword ptr [0x0085bdd8]
0074DD45  8B D8                     MOV EBX,EAX
0074DD47  83 FB 01                  CMP EBX,0x1
0074DD4A  74 16                     JZ 0x0074dd62
0074DD4C  81 FB 02 01 00 00         CMP EBX,0x102
0074DD52  0F 85 AB 00 00 00         JNZ 0x0074de03
0074DD58  3B 74 24 40               CMP ESI,dword ptr [ESP + 0x40]
0074DD5C  0F 84 A1 00 00 00         JZ 0x0074de03
LAB_0074dd62:
0074DD62  8B 5C 24 44               MOV EBX,dword ptr [ESP + 0x44]
0074DD66  33 F6                     XOR ESI,ESI
0074DD68  3B DE                     CMP EBX,ESI
0074DD6A  74 25                     JZ 0x0074dd91
0074DD6C  8B 74 24 48               MOV ESI,dword ptr [ESP + 0x48]
0074DD70  6A 01                     PUSH 0x1
LAB_0074dd72:
0074DD72  56                        PUSH ESI
0074DD73  56                        PUSH ESI
0074DD74  8D 44 24 28               LEA EAX,[ESP + 0x28]
0074DD78  53                        PUSH EBX
0074DD79  50                        PUSH EAX
0074DD7A  FF D5                     CALL EBP
0074DD7C  85 C0                     TEST EAX,EAX
0074DD7E  74 0F                     JZ 0x0074dd8f
0074DD80  8D 44 24 1C               LEA EAX,[ESP + 0x1c]
0074DD84  50                        PUSH EAX
0074DD85  FF 15 F8 BD 85 00         CALL dword ptr [0x0085bdf8]
0074DD8B  6A 01                     PUSH 0x1
0074DD8D  EB E3                     JMP 0x0074dd72
LAB_0074dd8f:
0074DD8F  33 F6                     XOR ESI,ESI
LAB_0074dd91:
0074DD91  56                        PUSH ESI
0074DD92  56                        PUSH ESI
0074DD93  56                        PUSH ESI
0074DD94  8D 44 24 28               LEA EAX,[ESP + 0x28]
0074DD98  56                        PUSH ESI
0074DD99  50                        PUSH EAX
0074DD9A  FF D5                     CALL EBP
0074DD9C  83 7C 24 40 FF            CMP dword ptr [ESP + 0x40],-0x1
0074DDA1  74 26                     JZ 0x0074ddc9
0074DDA3  39 74 24 40               CMP dword ptr [ESP + 0x40],ESI
0074DDA7  74 20                     JZ 0x0074ddc9
0074DDA9  FF 15 04 BD 85 00         CALL dword ptr [0x0085bd04]
0074DDAF  8B C8                     MOV ECX,EAX
0074DDB1  2B 4C 24 14               SUB ECX,dword ptr [ESP + 0x14]
0074DDB5  3B 4C 24 40               CMP ECX,dword ptr [ESP + 0x40]
0074DDB9  76 06                     JBE 0x0074ddc1
0074DDBB  89 74 24 40               MOV dword ptr [ESP + 0x40],ESI
0074DDBF  EB 04                     JMP 0x0074ddc5
LAB_0074ddc1:
0074DDC1  29 4C 24 40               SUB dword ptr [ESP + 0x40],ECX
LAB_0074ddc5:
0074DDC5  89 44 24 14               MOV dword ptr [ESP + 0x14],EAX
LAB_0074ddc9:
0074DDC9  39 74 24 10               CMP dword ptr [ESP + 0x10],ESI
0074DDCD  0F 85 55 FF FF FF         JNZ 0x0074dd28
0074DDD3  8B 35 F8 BC 85 00         MOV ESI,dword ptr [0x0085bcf8]
0074DDD9  FF D6                     CALL ESI
0074DDDB  50                        PUSH EAX
0074DDDC  FF 15 08 BD 85 00         CALL dword ptr [0x0085bd08]
0074DDE2  83 F8 02                  CMP EAX,0x2
0074DDE5  89 44 24 18               MOV dword ptr [ESP + 0x18],EAX
0074DDE9  73 0B                     JNC 0x0074ddf6
0074DDEB  6A 02                     PUSH 0x2
0074DDED  FF D6                     CALL ESI
0074DDEF  50                        PUSH EAX
0074DDF0  FF 15 74 BB 85 00         CALL dword ptr [0x0085bb74]
LAB_0074ddf6:
0074DDF6  C7 44 24 10 01 00 00 00   MOV dword ptr [ESP + 0x10],0x1
0074DDFE  E9 25 FF FF FF            JMP 0x0074dd28
LAB_0074de03:
0074DE03  33 F6                     XOR ESI,ESI
0074DE05  39 74 24 10               CMP dword ptr [ESP + 0x10],ESI
0074DE09  74 30                     JZ 0x0074de3b
0074DE0B  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
0074DE0F  FF 15 F8 BC 85 00         CALL dword ptr [0x0085bcf8]
0074DE15  50                        PUSH EAX
0074DE16  FF 15 74 BB 85 00         CALL dword ptr [0x0085bb74]
0074DE1C  6A 08                     PUSH 0x8
0074DE1E  FF 15 D4 BD 85 00         CALL dword ptr [0x0085bdd4]
0074DE24  C1 E8 10                  SHR EAX,0x10
0074DE27  A8 08                     TEST AL,0x8
0074DE29  74 10                     JZ 0x0074de3b
0074DE2B  56                        PUSH ESI
0074DE2C  56                        PUSH ESI
0074DE2D  56                        PUSH ESI
0074DE2E  FF 15 D4 BC 85 00         CALL dword ptr [0x0085bcd4]
0074DE34  50                        PUSH EAX
0074DE35  FF 15 24 BE 85 00         CALL dword ptr [0x0085be24]
LAB_0074de3b:
0074DE3B  5F                        POP EDI
0074DE3C  5E                        POP ESI
0074DE3D  8B C3                     MOV EAX,EBX
0074DE3F  5D                        POP EBP
0074DE40  5B                        POP EBX
0074DE41  83 C4 28                  ADD ESP,0x28
0074DE44  C2 10 00                  RET 0x10
