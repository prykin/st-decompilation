STDcResourcC::sub_005805C0:
005805C0  56                        PUSH ESI
005805C1  8B F1                     MOV ESI,ECX
005805C3  57                        PUSH EDI
005805C4  6A 1D                     PUSH 0x1d
005805C6  8B 86 5D 02 00 00         MOV EAX,dword ptr [ESI + 0x25d]
005805CC  6A 00                     PUSH 0x0
005805CE  50                        PUSH EAX
005805CF  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
005805D5  E8 FB 2F E8 FF            CALL 0x004035d5
005805DA  8B 0D 64 67 80 00         MOV ECX,dword ptr [0x00806764]
005805E0  50                        PUSH EAX
005805E1  51                        PUSH ECX
005805E2  6A 0E                     PUSH 0xe
005805E4  8B CF                     MOV ECX,EDI
005805E6  E8 98 3B E8 FF            CALL 0x00404183
005805EB  85 C0                     TEST EAX,EAX
005805ED  0F 85 C0 00 00 00         JNZ 0x005806b3
005805F3  8B 15 B4 B0 7C 00         MOV EDX,dword ptr [0x007cb0b4]
005805F9  A1 64 67 80 00            MOV EAX,[0x00806764]
005805FE  6A 1D                     PUSH 0x1d
00580600  52                        PUSH EDX
00580601  50                        PUSH EAX
00580602  6A 0D                     PUSH 0xd
00580604  8B CF                     MOV ECX,EDI
00580606  E8 78 3B E8 FF            CALL 0x00404183
0058060B  85 C0                     TEST EAX,EAX
0058060D  0F 85 A0 00 00 00         JNZ 0x005806b3
00580613  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00580619  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0058061F  8B CF                     MOV ECX,EDI
00580621  52                        PUSH EDX
00580622  6A 0E                     PUSH 0xe
00580624  E8 17 4C E8 FF            CALL 0x00405240
00580629  DB 86 4D 02 00 00         FILD dword ptr [ESI + 0x24d]
0058062F  51                        PUSH ECX
00580630  D8 0D 04 05 79 00         FMUL float ptr [0x00790504]
00580636  D8 05 00 05 79 00         FADD float ptr [0x00790500]
0058063C  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00580642  D9 1C 24                  FSTP float ptr [ESP]
00580645  DB 86 49 02 00 00         FILD dword ptr [ESI + 0x249]
0058064B  51                        PUSH ECX
0058064C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00580652  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
00580658  D9 1C 24                  FSTP float ptr [ESP]
0058065B  DB 86 45 02 00 00         FILD dword ptr [ESI + 0x245]
00580661  51                        PUSH ECX
00580662  8B CF                     MOV ECX,EDI
00580664  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0058066A  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
00580670  D9 1C 24                  FSTP float ptr [ESP]
00580673  E8 61 3F E8 FF            CALL 0x004045d9
00580678  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
0058067E  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00580684  6A FF                     PUSH -0x1
00580686  50                        PUSH EAX
00580687  E8 54 9D 16 00            CALL 0x006ea3e0
0058068C  6A 0D                     PUSH 0xd
0058068E  8B CF                     MOV ECX,EDI
00580690  E8 68 34 E8 FF            CALL 0x00403afd
00580695  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058069B  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005806A1  8B CF                     MOV ECX,EDI
005806A3  52                        PUSH EDX
005806A4  6A 0D                     PUSH 0xd
005806A6  E8 95 4B E8 FF            CALL 0x00405240
005806AB  5F                        POP EDI
005806AC  B8 01 00 00 00            MOV EAX,0x1
005806B1  5E                        POP ESI
005806B2  C3                        RET
LAB_005806b3:
005806B3  5F                        POP EDI
005806B4  83 C8 FF                  OR EAX,0xffffffff
005806B7  5E                        POP ESI
005806B8  C3                        RET
