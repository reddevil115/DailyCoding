from django.shortcuts import render
from .models import Content

# Create your views here.
def contents_list(request):
    Contents = Content.objects.all()
    return render(request, 'freeboard/contents_list.html',{'Contents': Contents})
