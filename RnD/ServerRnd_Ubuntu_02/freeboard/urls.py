from django.urls import path
from . import views

urlpatterns = [
    path('', views.contents_list, name='contents_list'),
]